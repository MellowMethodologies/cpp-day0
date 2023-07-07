#include <iostream>
#include <cstring>
#include <iomanip>
#include "phone.hpp"

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
    std::cout << "Darkest secret";
    std::getline(std::cin, darkestSecret);

    if (!firstName.length() || !lastName.length() || !nickname.length() 
        || !phoneNumber.length() || !darkestSecret.length())
    {
        std::cout<< "error!\n";
        get_info();
    }
}

void    main_helper()
{
    phoneBook ph;
    std::string choice;

    std::cout << "available commands : ADD, SEARCH AND EXIT\n";
    std::cin >> choice;
    if (!choice.compare("ADD"))
    {
        ph.contact[0].get_info();
    }
    else if (!choice.compare("SEARCH"))
    {
        std::cout<<std::setfill(' ')<<std::setw(10);
        std::cout<< "index";
        std::cout<<std::setfill(' ')<<std::setw(10);
        std::cout<<"firstname";
        std::cout<<std::setfill(' ')<<std::setw(10);
        std::cout<<"lastname";
        std::cout<<std::setfill(' ')<<std::setw(10);
        std::cout<<"nickname"<<std::endl;
        while()
    }
    else if (!choice.compare("EXIT"))
    {
        std::cout << "goodBye!"<< std::endl;
        exit(0);
    }
    else
    {
        main_helper();
    }
}

int main()
{
    std::cout << "*----------------------------*\n";
    std::cout << "* Welcome to the Megaphone!! *\n";
    std::cout << "*----------------------------*\n";

    main_helper();
}