#pragma once
using namespace System;

ref class Engine {
	public:
		int id;
		String^ name;
		String^ fuelType;
		int capacity;
		int fuelConsumption;

		Engine(String^ name,String^ fuelType,int capacity,int fuelConsumption)
		{
			this->name = name;
			this->fuelType = fuelType;
			int capacity = capacity;
			this->fuelConsumption = fuelConsumption;
		}

		Engine(int id, String^ name, String^ fuelType, int capacity, int fuelConsumption)
			:Engine(name,fuelType,capacity,fuelConsumption)
		{
			this->id = id;
		}


};