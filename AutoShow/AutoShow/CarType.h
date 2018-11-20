#pragma once
using namespace System;

ref class CarType {

	public:
		int id;
		String^ name;

		CarType(String^ name)
		{
			this->name = name;
		}

		CarType(int id,String^ name):CarType(name)
		{
			this->id = id;
		}
};