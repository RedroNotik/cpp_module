//
// Created by timof on 13.03.2022.
//

#include "Contact.h"


void  Contact::setContact(void)
{
	std::cin >> this->first_name;
	std::cin >> this->second_name;
	std::cout << "WTF" << std::endl;
}

void  Contact::getContact(void)
{
	std::cout << this->first_name;
	std::cout << this->second_name;
	std::cout << "WTF" << std::endl;
}