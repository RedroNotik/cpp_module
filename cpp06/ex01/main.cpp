//
// Created by Gaynell Hanh on 4/7/22.
//

#include <iostream>

typedef struct Data
{
	std::string name;
	int age;
	int height;
}Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t raw;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr;
	ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

int main()
{
	Data bob;
	bob.name = "Bob";
	bob.age = 33;
	bob.height = 34;

	std::cout << "Name: "<< bob.name << std::endl;
	std::cout << "Age: "<< bob.age << std::endl;
	std::cout <<"Height: "<<  bob.height << std::endl;
	std::cout << "Address: "<< &bob << std::endl;

	uintptr_t ptr = serialize(&bob);

	Data *john = deserialize(ptr);
	std::cout << "Name: "<< john->name << std::endl;
	std::cout << "Age: "<< john->age << std::endl;
	std::cout <<"Height: "<< john->height << std::endl;
	std::cout << "Address: "<< john << std::endl;
	return 0;
}

