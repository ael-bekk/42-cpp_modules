#include "Account.hpp"
#include <iostream>
#include <string>
#include <time.h>

int Account::_nbAccounts;
int	Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int	Account::getNbAccounts() {

    return (_nbAccounts);
}

int	Account::getTotalAmount() {

    return (_totalAmount);
}

int	Account::getNbDeposits() {

    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {

    return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void ) {

    time_t     now = time(0);
    struct tm  str;
    str = *localtime(&now);
    std::cout << "[" + std::to_string(str.tm_year + 1900)
            + std::to_string(str.tm_mon)
            + std::to_string(str.tm_mday)
            + "_" + std::to_string(str.tm_hour)
            + std::to_string(str.tm_min)
            + std::to_string(str.tm_sec) + "]";
}

void	Account::displayAccountsInfos( void ) {

    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {

    this->_totalNbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:";
    this->_amount += deposit;
    this->_totalAmount += deposit;
    std::cout << deposit << ";amount:" << this->_amount << ";nb_deposits:" << ++this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
    if (this->_amount - withdrawal >= 0)
    {
        
        this->_totalAmount -= withdrawal;
        this->_totalNbWithdrawals++;
        std::cout << withdrawal;
        this->_amount -= withdrawal;
        std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
    }
    else
         std::cout << "refused" << std::endl;
    return (0);
}


Account::Account( int initial_deposit ) {
    this->_accountIndex = this->_nbAccounts;
    this->_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _nbAccounts << ";amount:" << this->_amount << ";created" << std::endl;
    this->_nbAccounts++;
    this->_nbDeposits = this->_nbWithdrawals = 0;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::checkAmount( void ) const {
    return (0);
}