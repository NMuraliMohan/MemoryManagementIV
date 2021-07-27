#include <iostream>

#include "Person.h"

int main()
{
	std::shared_ptr<Address> ptr_to_shared_address;
	
	{
		Person murali(std::string("Murali"), 54);
		murali.AddAddress();
		ptr_to_shared_address = murali.GetAddress();
	}
	std::cout << ptr_to_shared_address->GetCity() << std::endl;

	

	

	
	
	return 0;
}
