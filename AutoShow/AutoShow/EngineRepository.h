#pragma once
#include "Engine.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class EngineRepository {

private:SqlConnection ^ connection;
public:
	EngineRepository()
	{
		connection = gcnew SqlConnection("Server=localhost\\SQLEXPRESS;Database=AutoShow;Trusted_Connection=True;");
		connection->Open();
	}

	~EngineRepository() {
		connection->Close();
	}

	List<Engine^>^ GetAllEngines() {
		List<Engine^>^ list = gcnew List<Engine^>();
		String^ query = "SELECT * FROM dbo.Engines";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew Engine(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2),
				reader->GetInt32(3),
				reader->GetInt32(4)
			));
		}
		reader->Close();
		return list;
	}

	Engine^ GetEngineById(int id) {
		Engine^ item = nullptr;
		String^ query = "SELECT * FROM dbo.Engines WHERE dbo.Engines.id = @id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", id));
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {
			item = gcnew Engine(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2),
				reader->GetInt32(3),
				reader->GetInt32(4)
			);
		}
		reader->Close();
		return item;
	}

	bool CreateEngine(Engine^ engine) {
		if (this->GetEngineById(engine->id)) {
			return false;
		}
		String^ query = "INSERT INTO Engines(name,fuelType,capacity,fuelConsumption) VALUES(@name,@fuelType,@capacity,@fuelConsumption)";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@name", engine->name));
		command->Parameters->Add(gcnew SqlParameter("@fuelType", engine->fuelType));
		command->Parameters->Add(gcnew SqlParameter("@capacity", engine->capacity));
		command->Parameters->Add(gcnew SqlParameter("@fuelConsumption", engine->fuelConsumption));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool UpdateEngine(Engine^ engine) {
		String^ query = "UPDATE dbo.Engines SET name=@name,fuelType=@fuelType,capacity=@capacity, " +
			"fuelConsumption=@fuelConsumption WHERE id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", engine->id));
		command->Parameters->Add(gcnew SqlParameter("@name", engine->name));
		command->Parameters->Add(gcnew SqlParameter("@fuelType", engine->fuelType));
		command->Parameters->Add(gcnew SqlParameter("@capacity", engine->capacity));
		command->Parameters->Add(gcnew SqlParameter("@fuelConsumption", engine->fuelConsumption));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool DeleteEngine(int engineId) {
		String^ query = "DELETE FROM dbo.Engines WHERE dbo.Engines.id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", engineId));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}


};