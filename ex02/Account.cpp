/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 09:23:01 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/20 12:48:07 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include<ctime>
#include "Account.hpp"

/* CONSTRUCTOR & DESTRUCTOR */

Account::Account(void)
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << checkAmount() << ";created\n";
}
Account::Account(int initial_deposit)
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit; 
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << checkAmount() << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";closed\n";
	return;
}

/* STATIC */

int	Account::_nbAccounts  = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:";
	std::cout << getNbWithdrawals() << std::endl;
	return;
}

void	Account::_displayTimestamp( void )
{
	struct tm *stime;
	time_t	ttime;

	time(&ttime);
	stime = localtime(&ttime);
	std::cout << "[" << stime->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << stime->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << stime->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << stime->tm_hour;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << stime->tm_min;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << stime->tm_sec << "] ";
}
/* REST OF FUNCTIONS */
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << checkAmount();
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
	std::cout << ";withdrawal:";
	if(checkAmount() < withdrawal)
	{
		std::cout << "refused\n";
		return(0);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
	return(1);
}

int	Account::checkAmount(void)	const
{
	return(_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}
