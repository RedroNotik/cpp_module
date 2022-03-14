//
// Created by timof on 13.03.2022.
//

#ifndef CPP_MODULE_PHONEBOOK_H
#define CPP_MODULE_PHONEBOOK_H
#include "Contact.h"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	Contact contacts[8];
	static int pos;
	void add_contact(void);
	void find(void);
public:
	void run(void);
};


#endif //CPP_MODULE_PHONEBOOK_H
