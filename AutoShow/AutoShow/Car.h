#pragma once
using namespace System;

ref class Car {
	public:
		int id;
		String^ name;
		String^ producer;
		int producerId;
		int price;
		String^ color;
		int engineId;
		String^ engine;
		int carTypeId;
		String^ carType;

		Car(
			String^ name,
			String^ producer,
			int producerId,
			int price,
			String^ color,
			String^ engine,
			int engineId,
			String^ carType,
			int carTypeId)
		{
			this->name = name;
			this->producer = producer;
			this-> producerId = producerId;
			this->price = price;
			this->color = color;
			this->engine = engine;
			this->engineId = engineId;
			this->carType = carType;
			this->carTypeId = carTypeId;
		}

		Car(
			int id,
			String^ name,
			String^ producer,
			int producerId,
			int price,
			String^ color,
			String^ engine,
			int engineId,
			String^ carType,
			int carTypeId)
			:Car(name, producer,producerId,price, color, engine,engineId,carType,carTypeId)
		{
			this->id = id;
		}

		String^ ToString() override {
			return producer + " "+name;
		}

};