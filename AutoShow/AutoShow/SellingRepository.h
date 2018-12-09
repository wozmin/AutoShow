#pragma once
#include "Selling.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class SellingRepository {

private:SqlConnection ^ connection;
public:
	SellingRepository()
	{
		connection = gcnew SqlConnection("Server=localhost\\SQLEXPRESS;Database=AutoShow;Trusted_Connection=True;");
		connection->Open();
	}

	~SellingRepository() {
		connection->Close();
	}

	List<Selling^>^ GetAllSellings() {
		List<Selling^>^ list = gcnew List<Selling^>();
		String^ query = "SELECT Sellings.id, Cars.name, carId,Customers.name,customerId,count,date FROM dbo.Sellings"+
			" JOIN Customers ON Customers.id = customerId JOIN Cars ON Cars.id = carId";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew Selling(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetInt32(2),
				reader->GetString(3),
				reader->GetInt32(4),
				reader->GetInt32(5),
				reader->GetDateTime(6)
			));
		}
		reader->Close();
		return list;
	}

	Selling^ GetSellingById(int id) {
		Selling^ item = nullptr;
		String^ query = "SELECT Sellings.id, Cars.name, carId, Customers.name, customerId, count, date FROM dbo.Sellings"+
			" JOIN Customers ON Customers.id = customerId JOIN Cars ON Cars.id = carId WHERE Sellings.id = @id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", id));
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {
			item = gcnew Selling(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetInt32(2),
				reader->GetString(3),
				reader->GetInt32(4),
				reader->GetInt32(5),
				reader->GetDateTime(6)
			);
		}
		reader->Close();
		return item;
	}

	List<Selling^>^ GetSellingsByName(String^ name) {
		List<Selling^>^ list = gcnew List<Selling^>();
		String^ query = "SELECT Sellings.id, Cars.name, carId, Customers.name, customerId, count, date FROM dbo.Sellings" +
			" JOIN Customers ON Customers.id = customerId JOIN Cars ON Cars.id = carId WHERE Customers.name LIKE '%'+@name+'%'";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@name",name));
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew Selling(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetInt32(2),
				reader->GetString(3),
				reader->GetInt32(4),
				reader->GetInt32(5),
				reader->GetDateTime(6)
			));
		}
		reader->Close();
		return list;
	}

	bool CreateSelling(Selling^ selling) {
		if (this->GetSellingById(selling->id)) {
			return false;
		}
		String^ query = "INSERT INTO Sellings(carId,customerId,count,date) "+
			" VALUES(@carId,@customerId,@count,@date)";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@carId", selling->carId));
		command->Parameters->Add(gcnew SqlParameter("@customerId", selling->customerId));
		command->Parameters->Add(gcnew SqlParameter("@count", selling->count));
		command->Parameters->Add(gcnew SqlParameter("@date", selling->date));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool UpdateSelling(Selling^ selling) {
		String^ query = "UPDATE dbo.Sellings SET customerId=@customerId,carId=@carId,count=@count, " +
			"date=@date WHERE id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", selling->id));
		command->Parameters->Add(gcnew SqlParameter("@customerId", selling->customerId));
		command->Parameters->Add(gcnew SqlParameter("@carId", selling->carId));
		command->Parameters->Add(gcnew SqlParameter("@count", selling->count));
		command->Parameters->Add(gcnew SqlParameter("@date", selling->date));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool DeleteSelling(int sellingId) {
		String^ query = "DELETE FROM dbo.Sellings WHERE dbo.Sellings.id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", sellingId));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}
};