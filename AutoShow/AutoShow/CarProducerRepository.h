#pragma once
#include "CarProducer.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class CarProducerRepository {

private:SqlConnection ^ connection;
public:
	CarProducerRepository()
	{
		connection = gcnew SqlConnection("Server=localhost\\SQLEXPRESS;Database=AutoShow;Trusted_Connection=True;");
		connection->Open();
	}

	~CarProducerRepository() {
		connection->Close();
	}

	List<CarProducer^>^ GetAllCarProducers() {
		List<CarProducer^>^ list = gcnew List<CarProducer^>();
		String^ query = "SELECT * FROM dbo.CarProducers";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew CarProducer(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			));
		}
		reader->Close();
		return list;
	}

	CarProducer^ GetCarProducerById(int id) {
		CarProducer^ item = nullptr;
		String^ query = "SELECT * FROM dbo.CarProducers WHERE dbo.CarProducers.id = @id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", id));
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {
			item = gcnew CarProducer(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			);
		}
		reader->Close();
		return item;
	}

	bool CreateCarProducer(CarProducer^ carProducer) {
		if (this->GetCarProducerById(carProducer->id)) {
			return false;
		}
		String^ query = "INSERT INTO CarProducers(name,country) VALUES(@name,@country)";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@name", carProducer->name));
		command->Parameters->Add(gcnew SqlParameter("@country", carProducer->country));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool UpdateCarProducer(CarProducer^ carProducer) {
		String^ query = "UPDATE dbo.CarProducers SET name=@name,country=@country WHERE id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", carProducer->id));
		command->Parameters->Add(gcnew SqlParameter("@name", carProducer->name));
		command->Parameters->Add(gcnew SqlParameter("@country", carProducer->country));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool DeleteCarProducer(int carProducerId) {
		String^ query = "DELETE FROM dbo.CarProducers WHERE dbo.CarProducers.id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", carProducerId));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}


};