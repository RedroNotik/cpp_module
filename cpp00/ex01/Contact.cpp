//
// Created by timof on 13.03.2022.
//

#include "Contact.h"

std::string Contact:: field[5] ={
		"First name",
		"Second name",
		"Nickname",
		"Phone number",
		"Darkest secret"
};

void  Contact::setContact()
{
	for(size_t i = 0; i < F_SIZE; i++)
	{
		while (this->data[i].empty())
		{
			std::cout << "Enter " << field[i] << ": ";
			getline(std::cin, this->data[i]);
		}
	}
}

void  Contact::getContact(int i)
{
	std::cout << data[i];
}