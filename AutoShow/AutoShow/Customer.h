#pragma once

using namespace System;

ref class Customer {
	
	public:
		int id;
		String^ name;
		String^ address;

		Customer(String^ name,String^ address)
		{
			this->name = name;
			this->address = address;
		}

		Customer(int id, String^ name, String^ address) :Customer(name, address) {
			this->id = id;
		}

		String^ ToString() override {
			return this->name;
		}
};