#pragma once
using namespace System;

ref class CarType {

	public:
		int id;
		String^ name;
		String^ description;

		CarType(String^ name,String^ description)
		{
			this->name = name;
			this->description = description;
		}

		CarType(int id,String^ name,String^ description):CarType(name,description)
		{
			this->id = id;
		}
};