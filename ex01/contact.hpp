#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>

class Contact 
{
	public:
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhoneNumber(std::string phoneNumber);
		void	setDarkestSecret(std::string darkestSecret);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);

		void	display_short(void);
		void	display(void);

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};



#endif