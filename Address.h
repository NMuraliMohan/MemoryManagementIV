#pragma once
#include <string>

class Address
{
private:
	std::string _city_name;
	int _street_number;
public:
	Address(const std::string& city_name, int street_number);
	std::string GetCity();
};
