#ifndef PHONE_HPP
#define PHONE_HPP

#include <iostream>
#include <cstring>


//Encapsulation is a good practice cause it protect data u can change it by using the 
class Contact
{
    public:
        void set_info();
        void get_info();
        int  isempty();
    private:
        int         empty;
        int         index;
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