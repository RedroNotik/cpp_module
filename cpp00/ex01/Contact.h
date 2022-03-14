//
// Created by timof on 13.03.2022.
//

#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H
#include <iostream>
#define F_SIZE 5
class Contact
{
	static std::string field[5];
	std::string data[5];
public:
	void setContact();
	void getContact(int i);
};


#endif //CPP_MODULE_CONTACT_H
