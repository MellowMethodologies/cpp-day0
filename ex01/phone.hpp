#ifndef PHONE_HPP
#define PHONE_HPP

#include <iostream>
#include <cstring>

class Contact
{
    public:
        void get_info();
        void show_info();
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

class phoneBook
{
    public:
        Contact contact[8];
};


#endif