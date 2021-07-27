#include "Address.h"

Address::Address(const std::string& city_name, int street_number) : _city_name(city_name), _street_number(street_number)
{
}

std::string Address::GetCity()
{
	return _city_name;
}
