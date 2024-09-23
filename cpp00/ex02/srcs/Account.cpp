/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:35:39 by masoares          #+#    #+#             */
/*   Updated: 2024/05/07 16:26:20 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    std::cout << " index:";
    _accountIndex = _nbAccounts;
    std::cout << _nbAccounts;
    _nbAccounts++;
    std::cout << ";amount:";
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    std::cout << _amount;
    std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << " index:";
    std::cout << _accountIndex;
    _nbAccounts--;
    std::cout << ";amount:";
    std::cout << _amount;
    std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    if (deposit <=0)
    {
        _displayTimestamp();
        std::cout << " index:";
        std::cout << _accountIndex;
        std::cout << ";p_amount:";
        std::cout << _amount;
        std::cout << ";deposit:";
        std::cout << "refused" << std::endl;
        return;
    }
    _displayTimestamp();
    std::cout << " index:";
    std::cout << _accountIndex;
    std::cout << ";p_amount:";
    std::cout << _amount;
    std::cout << ";deposit:";
    std::cout << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << ";amount:";
    std::cout << _amount;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";nb_deposits:";
    std::cout << _nbDeposits << std::endl;
    
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount || withdrawal <= 0)
    {
        _displayTimestamp();
        std::cout << " index:";
        std::cout << _accountIndex;
        std::cout << ";p_amount:";
        std::cout << _amount;
        std::cout << ";withdrawal:";
        std::cout << "refused" << std::endl;
        return (0);
    }
     _displayTimestamp();
    std::cout << " index:";
    std::cout << _accountIndex;
    std::cout << ";p_amount:";
    std::cout << _amount;
    std::cout << ";withdrawal:";
    std::cout << withdrawal;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << ";amount:";
    std::cout << _amount;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";nb_withdrawals:";
    std::cout << _nbWithdrawals << std::endl;
    return (1);
}
int		Account::checkAmount( void ) const
{
    return(_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << checkAmount();
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t timing;
    tm *timer;
    time(&timing);
    timer = localtime(&timing);
    
    std::cout << "[" << timer->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << timer->tm_mon;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << timer->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << timer->tm_hour;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << timer->tm_min;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << timer->tm_sec;
    std::cout << "]";   
}