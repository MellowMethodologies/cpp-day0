#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std:: cout << "created" << std::endl;
	_totalAmount+=initial_deposit;
	_nbAccounts++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);

    char buffer[80];
    std::strftime(buffer, 80, "%Y%m%d_%H%M%S", localTime);

    std::cout << "[" << buffer << "] ";
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout<< "accounts:" << getNbAccounts() << ";" << "total:"\
		<< getTotalAmount() << ";" << "deposits" << getNbDeposits()\
		<< ";" << "withdrawls:" << getNbWithdrawals() << std::endl; 
}

void Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount > withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		return true;
	}
	return false;
}

int		Account::checkAmount()const
{
	return this->_amount;
}

void	Account::displayStatus()const
{
	_displayTimestamp();
	std::cout<< "index:" << this->_accountIndex << ";" << "amount:"\
		<< this->_amount << ";" << "deposits" << this->_nbDeposits\
		<< ";" << "withdrawls:" << this->_nbWithdrawals << std::endl; 
}
