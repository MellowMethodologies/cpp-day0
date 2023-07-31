#include <stdio.h>
#include "phoneBook.hpp"

int	PhoneBook::contNumb = 0;
int	PhoneBook::tot = 0;

int PhoneBook::getcontNumb(void)
{
	return contNumb;
}

int PhoneBook::gettot(void)
{
	return tot;
}

void PhoneBook::modifyContact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->tab_contact[contNumb].setFirstName(firstName);
	this->tab_contact[contNumb].setLastName(lastName);
	this->tab_contact[contNumb].setNickName(nickName);
	this->tab_contact[contNumb].setPhoneNumber(phoneNumber);
	this->tab_contact[contNumb].setDarkestSecret(darkestSecret);
	contNumb++;
	contNumb %= 8;
	if (tot < 8)
		tot++;
}

void PhoneBook::get_list(void)
{
	int i;

	i = 0;
	std::cout << "Index     |First Name|Last Name |NickName  |" << std::endl;
	while (i < tot)
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << i << "|";
		this->tab_contact[i].display_short();
		i++;
	}
}

void PhoneBook::get_contact(int index)
{
	this->tab_contact[index].display();
}

std::string	get_set (std::string varName)
{
	std::string prompt;

	while (1)
	{
		std::cout << "Enter " + varName + " : " <<std::endl;
		std::getline(std::cin, prompt);
		if (prompt.length() > 0)
			break ;
	}
	return prompt;
}

int main ()
{
	PhoneBook phonebook;
	std::string prompt;
	char x;
	short int id;

	x = 0;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT : " << std::endl;
		std::getline(std::cin, prompt);
		if (prompt == "SEARCH")
		{
			phonebook.get_list();
			if (phonebook.gettot() > 0)
			{	
				while (1)
				{
					std::cout << "Choose an id(0 - 7) : " << std::endl;
					std::getline(std::cin, prompt);
					x = prompt[0];
					if (prompt.length() == 1 && (prompt[0] >= '0' && prompt[0] <= '7'))
					{			
						id = x - 48;
						if (id < phonebook.gettot())
						{
							phonebook.get_contact(id);
							break ;
						}
					}
				}
			}
		}
		else if (prompt == "ADD")
		{
			std::cout << "Add a contact" << std::endl;
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

			firstName = get_set("First Name");
			lastName = get_set("Last Name");
			nickName = get_set("Nickame");
			phoneNumber = get_set("Phone Number");
			darkestSecret = get_set("Darkest Secret");

			phonebook.modifyContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

		}
		else if (prompt == "EXIT")
		{
			return (0);
		}
	}

	return (0);
}