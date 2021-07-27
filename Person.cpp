#include "Person.h"
using namespace std;

Person::Person(const std::string& name, int age) : _name(name), _age(age)
{
}

void Person::AddAddress()
{
	shared_address_ptr = std::make_shared<Address>(std::string("Hyderabad"), 11);
	// return shared_address_ptr;
}

std::shared_ptr<Address> Person::GetAddress()
{
	if (shared_address_ptr)
	{
		return shared_address_ptr;
	}
	else
	{
		"";
	}
}
