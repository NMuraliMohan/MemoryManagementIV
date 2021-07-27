#pragma once
#include <memory>
#include <string>
#include "Address.h"

class Person
{
	std::string _name;
	int _age;
	//Address* address;
	std::shared_ptr<Address> shared_address_ptr;

public:
	Person(const std::string&  name, int age);
	void AddAddress();
	std::shared_ptr<Address> GetAddress();
	
};

