#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook 
{
	public:
		void		modifyContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		int			get_nbContacts(void);
		void		get_contact(int index);
		void		get_list(void);
		int			get_totalContacts(void);

	private:
		Contact 	tab_contact[8];
		static int 	_nbContacts;
		static int 	_totalContacts;
};

#endif