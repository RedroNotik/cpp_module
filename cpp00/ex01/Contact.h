//
// Created by timof on 13.03.2022.
//

#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

#include <iostream>
class Contact
{
public:
	char	*first_name;
	char 	*second_name;
	char	*nickname;
	char 	*phone_number;
	char 	*darkest_secret;
public:
	void setContact();
	void getContact();
};


#endif //CPP_MODULE_CONTACT_H
