#pragma once

using namespace System;

ref class CarProducer {
	public:
		int id;
		String ^ name;
		String^ country;

		CarProducer(String^ name, String^ coutry)
		{
			this->name = name;
			this->country = country;
		}

		CarProducer(int id,String^ name,String^ coutry):CarProducer(name,coutry)
		{
			this->id = id;
		}

};