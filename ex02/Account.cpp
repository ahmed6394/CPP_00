/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:35:43 by gahmed            #+#    #+#             */
/*   Updated: 2025/06/03 21:35:43 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
    : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
    std::cout << "index:" <<_accountIndex
            << ";amount:" << initial_deposit
            << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" <<_accountIndex
            << ";amount:" << _amount
            << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
    std::tm *ltm = std::localtime(&now);
    std::cout << "[" << (ltm->tm_year + 1900)
            << std:: setw(2) << std::setfill('0') << (ltm->tm_mon + 1)
            << std:: setw(2) << std::setfill('0') << ltm->tm_mday << "_"
            << std:: setw(2) << std::setfill('0') << ltm->tm_hour
            << std:: setw(2) << std::setfill('0') << ltm->tm_min
            << std:: setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "acounts:" << getNbAccounts() 
            << ";total:" << getTotalAmount() 
            << ";deposits:" << getNbDeposits() 
            << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";p_amount:" << _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++; 
    std::cout << ";deposits:" << deposit
            << ";amount:" << _amount
            << ";nb_deposit:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";p_amount:" << _amount;
    if (_amount < withdrawal)
    {
        std::cout <<  ";withdrawal:refused" << std::endl;
        return false;
    } 
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -=  withdrawal;
        _totalNbWithdrawals++;
        std::cout <<  ";withdrawal:" << withdrawal
                << ";amount:" << _amount
                << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
        return true;
    }
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";amount:" << _amount 
            << ";deposits:" << _nbDeposits 
            << ";withdrawals:" << _nbWithdrawals << std::endl;
}

