//
// Created by Gaynell Hanh on 3/15/22.
//

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

void Account::displayAccountsInfos()
{
	using std::chrono::system_clock;
	std::time_t tt = system_clock::to_time_t (system_clock::now());

	struct std::tm * ptm = std::localtime(&tt);
	std::cout << std::put_time( ptm, "[%Y%m%d_%H%M%S]");

}