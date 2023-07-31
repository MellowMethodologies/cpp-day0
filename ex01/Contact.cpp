#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

/*Setters*/
void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

/*getters*/
std::string	Contact::getFirstName(void)
{
	return this->firstName;
}

std::string	Contact::getLastName(void)
{
	return this->lastName;
}

std::string	Contact::getNickName(void)
{
	return this->nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return this->_darkestSecret;
}

/*printer*/
void Contact::display_short(void)
{
	if (this->firstName.length() > 10)
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->firstName.substr(0,9) + "." << "|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->firstName << "|";
	
	if (this->lastName.length() > 10)			
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->lastName.substr(0,9) + "." << "|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->lastName << "|";

	if (this->nickName.length() > 10)			
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->nickName.substr(0,9) + "." << "|" <<std::endl;
	else
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->nickName << "|" <<std::endl;
}

void Contact::display(void)
{
	std::cout << "    First Name : " << this->firstName << std::endl;
	std::cout << "     Last Name : " << this->lastName << std::endl;
	std::cout << "      NickName : " << this->nickName << std::endl;
	std::cout << "  Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
}