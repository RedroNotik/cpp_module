#include <iostream>
#include "iter.hpp"
#include "Test.hpp"

int main()
{
	int int_mas[] = {12, 2, 4, 5, 8, 9};
	std::string delim[] = {"**********************",
						   "//////////////////////",
						   "**********************"};
	Test test[11];
	iter(int_mas, 6, print);
	iter(int_mas, 3, pow);
	iter(delim, 3, print);
	iter(int_mas, 6, print);
	iter(delim, 3, print);
	iter(test, 11, print);
	iter(delim, 3, print);
	iter(test, 4, pow);
	iter(test, 11, print);
	return 0;
}
