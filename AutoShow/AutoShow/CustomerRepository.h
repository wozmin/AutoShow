#pragma once
#include "Customer.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;


ref class CustomerRepository {

private:SqlConnection ^ connection;
public:
	CustomerRepository()
	{
		connection = gcnew SqlConnection("Server=localhost\\SQLEXPRESS;Database=AutoShow;Trusted_Connection=True;");
		connection->Open();
	}

	~CustomerRepository() {
		connection->Close();
	}

	List<Customer^>^ GetAllCustomers() {
		List<Customer^>^ list = gcnew List<Customer^>();
		String^ query = "SELECT * FROM dbo.Customers";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew Customer(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			));
		}
		reader->Close();
		return list;
	}

	Customer^ GetCustomerById(int id) {
		Customer^ item = nullptr;
		String^ query = "SELECT * FROM dbo.Customers WHERE dbo.Customers.id = @id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", id));
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {
			item = gcnew Customer(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			);
		}
		reader->Close();
		return item;
	}

	List<Customer^>^ GetCustomersByName(String^ name) {
		List<Customer^>^ list = gcnew List<Customer^>();
		String^ query = "SELECT * FROM dbo.Customers WHERE dbo.Customers.name LIKE '%'+@name+'%'";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@name", name));
		SqlDataReader^ reader = command->ExecuteReader();
		while (reader->Read()) {
			list->Add(gcnew Customer(
				reader->GetInt32(0),
				reader->GetString(1),
				reader->GetString(2)
			));
		}
		reader->Close();
		return list;
	}

	bool CreateCustomer(Customer^ customer) {
		if (this->GetCustomerById(customer->id)) {
			return false;
		}
		String^ query = "INSERT INTO Customers(name,address) VALUES(@name,@address)";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@name", customer->name));
		command->Parameters->Add(gcnew SqlParameter("@address", customer->address));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool UpdateCustomer(Customer^ customer) {
		String^ query = "UPDATE dbo.Customers SET name=@name,address=@address WHERE id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", customer->id));
		command->Parameters->Add(gcnew SqlParameter("@name", customer->name));
		command->Parameters->Add(gcnew SqlParameter("@address", customer->address));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}

	bool DeleteCustomer(int customerId) {
		String^ query = "DELETE FROM dbo.Customers WHERE dbo.Customers.id=@id";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->Add(gcnew SqlParameter("@id", customerId));
		if (command->ExecuteNonQuery() == 0) {
			return false;
		}
		return true;
	}


};