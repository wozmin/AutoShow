#pragma once
using namespace System;


public ref class AppSettings abstract sealed
{
public:
	static String^ ConnectionString = "Server=localhost\\SQLEXPRESS;Database=Chat;Trusted_Connection=True;";
	AppSettings(){}
	~AppSettings(){}

private:

};
