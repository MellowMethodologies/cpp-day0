#include <iostream>
#include <cstring>
#include <iomanip>
#include "phone.hpp"


int Contact::isempty()
{
	return(empty);
}

void Contact::get_info()
{
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (!firstName.length() || !lastName.length() || !nickname.length() 
		|| !phoneNumber.length() || !darkestSecret.length())
	{
		std::cout<< "error!\n";
		get_info();
	}
	empty = 1;
}

void Contact::show_info()
{
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout<< "index |";
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout<<"firstname |";
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout<<"lastname |";
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout<<"nickname"<<std::endl;
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout << index << "|";
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout << firstName << "|";
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout << lastName << "|";
	std::cout<<std::setfill(' ')<<std::setw(10);
	std::cout << nickname << std::endl;
}

void    main_helper()
{
	phoneBook ph;
	int i = 0;
	int j = 0;
	std::string choice;
	while(ph.contact[j].isempty())
		ph.contact[j++].show_info();
	std::cout << "available commands : ADD, SEARCH AND EXIT\n";
	std::cin >> choice;
	if (!choice.compare("ADD"))
	{
		while(!ph.contact[i++].isempty());
		ph.contact[i].get_info();
	}
	else if (!choice.compare("SEARCH"))
	{
		std::cout<<std::setfill(' ')<<std::setw(10);
		std::cout<< "index |";
		std::cout<<std::setfill(' ')<<std::setw(10);
		std::cout<<"firstname |";
		std::cout<<std::setfill(' ')<<std::setw(10);
		std::cout<<"lastname |";
		std::cout<<std::setfill(' ')<<std::setw(10);
		std::cout<<"nickname"<<std::endl;
	}
	else if (!choice.compare("EXIT"))
	{
		std::cout << "goodBye!"<< std::endl;
		exit(0);
	}
	main_helper();
}

int main()
{
	phoneBook ph;
	std::cout << "*----------------------------*\n";
	std::cout << "* Welcome to the Megaphone!! *\n";
	std::cout << "*----------------------------*\n";
	main_helper();
}