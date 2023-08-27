/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:12:58 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/27 13:57:15 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "Accounts: " << _nbAccounts << "; Total: " << _totalAmount 
              << "; Deposits:" << _totalNbDeposits << "; Withdrawals: " << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account(void) {
    _nbAccounts--;
    _totalAmount -= _amount;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    _totalAmount += deposit;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "Index: " << _accountIndex << "; P_amount: " << _amount - deposit 
              << "; Deposit: " << deposit << "; Amount:" << _amount << "; Nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << "Index: " << _accountIndex << "; P_amount: " << _amount 
                  << "; Withdrawal : Refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "Index: " << _accountIndex << "; P_amount: " << _amount + withdrawal 
              << "; Withdrawal: " << withdrawal << "; Amount: " << _amount 
              << "; Nb_withdrawals: " << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "Index: " << _accountIndex << "; Amount: " << _amount 
              << "; Deposits:" << _nbDeposits << "; Withdrawals: " << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "[" 
              << 1900 + ltm->tm_year 
              << (ltm->tm_mon < 9 ? "0" : "") << ltm->tm_mon + 1
              << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday
              << "_"
              << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour 
              << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min
              << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec
              << "] ";
}
