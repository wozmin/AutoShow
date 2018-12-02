#pragma once
#include "Car.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

ref class CarRepository {
	
	private:SqlConnection ^ connection;
	public:
		CarRepository()
		{
			connection = gcnew SqlConnection("Server=localhost\\SQLEXPRESS;Database=AutoShow;Trusted_Connection=True;");
			connection->Open();
		}

		~CarRepository() {
			connection->Close();
		}

		List<Car^>^ GetAllCars() {
			List<Car^>^ list = gcnew List<Car^>();
			String^ query = "SELECT Cars.id, Cars.name,CarProducers.name,producerId, price,transmissionType,color,passedDistance FROM Cars "
				+"JOIN CarProducers ON CarProducers.id = Cars.producerId";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			SqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read()) {
				list->Add(gcnew Car(
					reader->GetInt32(0),
					reader->GetString(1),
					reader->GetString(2),
					reader->GetInt32(3),
					reader->GetInt32(4),
					reader->GetString(5),
					reader->GetString(6),
					reader->GetInt32(7)
				));
			}
			reader->Close();
			return list;
		}

		Car^ GetCarById(int id) {
			Car^ item = nullptr;
			String^ query = "SELECT Cars.id, Cars.name, CarProducers.name, producerId, price, transmissionType, color, passedDistance FROM Cars "
				+ "JOIN CarProducers ON CarProducers.id = Cars.producerId Where Cars.id = @id";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->Add(gcnew SqlParameter("@id", id));
			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				item = gcnew Car(
					reader->GetInt32(0),
					reader->GetString(1),
					reader->GetString(2),
					reader->GetInt32(3),
					reader->GetInt32(4),
					reader->GetString(5),
					reader->GetString(6),
					reader->GetInt32(7)
				);
			}
			reader->Close();
			return item;
		}

		bool CreateCar(Car^ car){
			if (this->GetCarById(car->id)) {
				return false;
			}
			String^ query = "INSERT INTO Cars(name,price,transmissionType,color,passedDistance,producerId) "+
				"VALUES(@name,@price,@transmissionType,@color,@passedDistance,@producerId)";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->Add(gcnew SqlParameter("@name", car->name));
			command->Parameters->Add(gcnew SqlParameter("@price", car->price));
			command->Parameters->Add(gcnew SqlParameter("@transmissionType", car->transmissionType));
			command->Parameters->Add(gcnew SqlParameter("@color", car->color));
			command->Parameters->Add(gcnew SqlParameter("@passedDistance", car->passedDistance));
			command->Parameters->Add(gcnew SqlParameter("@producerId", car->producerId));
			if (command->ExecuteNonQuery() == 0) {
				return false;
			}
			return true;
		}

		bool UpdateCar(Car^ car) {
			String^ query = "UPDATE dbo.Cars SET name=@name,price=@price,transmissionType=@transmissionType, "+
				"passedDistance=@passedDistance, color=@color, producerId=@producerId WHERE id=@id";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->Add(gcnew SqlParameter("@id", car->id));
			command->Parameters->Add(gcnew SqlParameter("@name", car->name));
			command->Parameters->Add(gcnew SqlParameter("@price",car->price));
			command->Parameters->Add(gcnew SqlParameter("@transmissionType", car->transmissionType));
			command->Parameters->Add(gcnew SqlParameter("@passedDistance", car->passedDistance));
			command->Parameters->Add(gcnew SqlParameter("@color", car->color));
			command->Parameters->Add(gcnew SqlParameter("@producerId", car->producerId));
			if (command->ExecuteNonQuery() == 0) {
				return false;
			}
			return true;
		}

		bool DeleteCar(int carId) {
			String^ query = "DELETE FROM dbo.Cars WHERE dbo.Cars.id=@id";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->Add(gcnew SqlParameter("@id", carId));
			if (command->ExecuteNonQuery() == 0) {
				return false;
			}
			return true;
		}


};