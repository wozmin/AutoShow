#pragma once
using namespace System;

ref class Selling{
	
	public:
		int id;
		String^ customer;
		int customerId;
		String^ car;
		int carId;
		int count;
		DateTime date;
		
		Selling(String^ customer, int customerId, String^ car, int carId, int count,DateTime date)
		{
			this->customer = customer;
			this->customerId = customerId;
			this->car = car;
			this->carId = carId;
			this->count = count;
			this->date = date;
		}

		Selling(int id,String^ customer,int customerId,String^ car,int carId,int count,DateTime date)
			:Selling(customer,customerId,car,carId,count,date)
		{
			this->id = id;
		}
};