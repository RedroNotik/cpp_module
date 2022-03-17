//
// Created by Gaynell Hanh on 3/15/22.
//

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int Account:: _nbAccounts = 0;
int	Account:: _totalAmount = 0;
int	Account:: _totalNbDeposits = 0;
int	Account:: _totalNbWithdrawals = 0;


void	Account::_displayTimestamp()
{
	using std::chrono::system_clock;
	std::time_t tt = system_clock::to_time_t (system_clock::now());

	struct std::tm * ptm = std::localtime(&tt);
	std::cout << std::put_time( ptm, "[%Y%m%d_%H%M%S]") << ' ';
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:"<<this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout  << ";deposits:"<< this->_nbDeposits << ";withdrawals:" <<
	this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
	this->_amount;
	this->_amount += deposit;
	std::cout  << ";deposit:"<< deposit << ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= this->_amount)
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
				  this->_amount << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->_amount
				   << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
				  this->_amount << ";withdrawal:refused" << std::endl;
		return (0);
	}
}