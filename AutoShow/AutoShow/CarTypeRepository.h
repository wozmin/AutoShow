#pragma once
#include "CarType.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class CarTypeRepository {

private:SqlConnection ^ connection;
public:
	CarTypeRepository()
	{
		connection = gcnew SqlConnection("Server=localhost\\SQLEXPRESS;Database=AutoShow;Trusted_Connection=True;");
		connection->Open();
	}

	~CarTypeRepository() {
		connection->Close();
	}

	List<CarType^>^ GetAllCarTypes() {
		List<CarType^>^ list = gcnew List<CarType^>();
		String^ query = "SELECT * FROM dbo.CarTypes";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew CarType(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			));
		}
		reader->Close();
		return list;
	}

	CarType^ GetCarTypeById(int id) {
		CarType^ item = nullptr;
		String^ query = "SELECT * FROM dbo.CarTypes WHERE dbo.CarTypes.id = @id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", id));
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {
			item = gcnew CarType(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			);
		}
		reader->Close();
		return item;
	}

	bool CreateCarType(CarType^ carType) {
		if (this->GetCarTypeById(carType->id)) {
			return false;
		}
		String^ query = "INSERT INTO CarTypes(name,description) VALUES(@name,@description)";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@name", carType->name));
		command->Parameters->Add(gcnew SqlParameter("@description", carType->description));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool UpdateCarType(CarType^ carType) {
		String^ query = "UPDATE dbo.CarTypes SET name=@name, description=@description WHERE id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", carType->id));
		command->Parameters->Add(gcnew SqlParameter("@name", carType->name));
		command->Parameters->Add(gcnew SqlParameter("@description", carType->description));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool DeleteCarType(int carTypeId) {
		String^ query = "DELETE FROM dbo.CarTypes WHERE dbo.CarTypes.id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", carTypeId));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}


};