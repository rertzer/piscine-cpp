/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:59:35 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/08 12:09:57 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts(void)
{
	return t::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return t::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return t::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return t::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	t::_displayTimestamp();
	std::cout << " accounts:" << t::getNbAccounts() << ";total:" << t::getTotalAmount();
	std::cout << ";deposits:" << t::getNbDeposits() << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	t::_totalAmount += initial_deposit;
	this->_accountIndex = t::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	t::_nbAccounts++;
}

Account::Account(void)
{
	this->_accountIndex = t::_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	t::_nbAccounts++;
}

Account::~Account(void)
{
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed"  << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" <<  this->_amount;
	
	this->_amount += deposit;
	this->_nbDeposits++;
	t::_totalAmount += deposit;
	t::_totalNbDeposits++;

	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	accepted = false;
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" <<  this->_amount << "whithdrawal:";
	
	if (this->_amount >= withdrawal)
	{
		accepted = true;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		t::_totalAmount -= withdrawal;
		t::_totalNbWithdrawals++;

		std::cout << withdrawal << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
		std::cout << "refused" << std::endl;
	return accepted;
}

int		Account::checkAmount(void) const
{
		return this->_amount;
}

void	Account::displayStatus(void) const
{
	t::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		now = std::time(0);
	tm			*ltm = localtime(&now);

	std::cout << "["  << 1900 + ltm->tm_year;
	std::cout << std::setfill ('0') << std::setw(2) << ltm->tm_mon + 1;
	std::cout << std::setfill ('0') << std::setw(2) << ltm->tm_mday << "_";
	std::cout << std::setfill ('0') << std::setw(2) << ltm->tm_hour;
	std::cout << std::setfill ('0') << std::setw(2) << ltm->tm_min;
	std::cout << std::setfill ('0') << std::setw(2) << ltm->tm_sec << "]";
}
