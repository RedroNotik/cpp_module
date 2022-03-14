//
// Created by timof on 13.03.2022.
//

#include "PhoneBook.h"

int PhoneBook:: pos  = 0;

void PhoneBook::add_contact(void)
{
	contacts[pos].setContact();
	pos++;
	if (pos == 8)
		pos = 0;
}

void PhoneBook::find(void)
{
	std::cout << "/" <<std::setfill('*') << std::setw(45) << "\\" << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "INDEX"<< '|';
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "FIRST NAME"<<
	'|';
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "LAST NAME"<<
	'|';
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "NICKNAME"<<
	'|' << std::endl;
	for (int i = 0; i < pos; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << '|' << std::setfill(' ') << std::setw(10);
//			if (this->contacts[i].size())
			this->contacts[i].getContact(j);
		}

	}
	std::cout << "\\" <<std::setfill('*') << std::setw(45) << "/" << std::endl;
}

void PhoneBook::run(void)
{
	std::string cmd;

	while (1)
	{
		std::cout << "CMD: |ADD| |SEARCH| |EXIT|" << std::endl;
		getline(std::cin, cmd);
		if (cmd == "ADD")
			this->add_contact();
		else if (cmd == "EXIT")
			return ;
		else if (cmd == "SEARCH")
			this->find();
		else
			std::cout << "Incorrect cmd, try one more time" << std::endl;
	}
}