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
	std::cout << "/" <<std::setfill('*') << std::setw(44) << "\\" << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "INDEX";
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "FIRST NAME";
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "LAST NAME";
	std::cout << "|" << std::setfill(' ') << std::setw(10)  << "NICKNAME"<<
	'|' << std::endl;
	std::cout << "|" <<std::setfill('-') << std::setw(44) << "|" << std::endl;
	for (int i = 0; i < pos; i++)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10)  << i + 1;
		for (int j = 0; j < 3; j++)
		{
			std::cout << '|' << std::setfill(' ') << std::setw(10);
			this->contacts[i].getContact(j, 10);
		}
		std::cout << "|" << std::endl;
	}
	std::cout << "\\" <<std::setfill('*') << std::setw(44) << "/" <<
	std::endl;
	std::string index;
	while (1)
	{
		std::cout << "Enter index: ";
		getline(std::cin, index);
		if ((!isdigit(index[0]) || index[0] == '9' || index[0] == '0') ||
		index[1] ||
		(std::stoi(index) > pos))
			std::cout << "Incorrect index" << std::endl;
		else
		{
			int pos_h = std::stoi(index) - 1;
			for (int i = 0; i < F_SIZE; i++)
			{
				this->contacts->getField(i);
				std::cout << ": ";
				this->contacts[pos_h].getContact(i, 0);
				std::cout << std::endl;
			}
			return ;
		}
	}
}

void PhoneBook::run(void)
{
	std::string cmd;

	while (1)
	{
		std::cout << "\033[34mCMD: |ADD| |SEARCH| |EXIT|\033[0m" << std::endl;
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