#pragma once
using namespace System;

ref class Car {
	public:
		int id;
		String^ name;
		String^ producer;
		int producerId;
		int price;
		String^ transmissionType;
		String^ color;
		int passedDistance;

		Car(String^ name,String^ producer,int producerId, int price,String^ transmissionType,String^ color,int passedDistance)
		{
			this->name = name;
			this->producer = producer;
			this-> producerId = producerId;
			this->price = price;
			this->transmissionType = transmissionType;
			this->passedDistance = passedDistance;
			this->color = color;
		}

		Car(int id, String^ name,String^ producer, int producerId, int price, String^ transmissionType, String^ color, int passedDistance)
			:Car(name, producer,producerId,price, transmissionType, color, passedDistance)
		{
			this->id = id;
		}

};