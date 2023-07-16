
#include "phoneBook.hpp"

int	PhoneBook::_nbContacts = 0;
int	PhoneBook::_totalContacts = 0;

int PhoneBook::get_nbContacts(void)
{
	return _nbContacts;
}

int PhoneBook::get_totalContacts(void)
{
	return _totalContacts;
}

void PhoneBook::modifyContact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->tab_contact[_nbContacts].setFirstName(firstName);
	this->tab_contact[_nbContacts].setLastName(lastName);
	this->tab_contact[_nbContacts].setNickName(nickName);
	this->tab_contact[_nbContacts].setPhoneNumber(phoneNumber);
	this->tab_contact[_nbContacts].setDarkestSecret(darkestSecret);
	_nbContacts++;
	_nbContacts %= 8;
	if (_totalContacts < 8)
		_totalContacts++;
}

void PhoneBook::get_list(void)
{
	int i;

	std::cout << "Index     |First Name|Last Name |NickName  |" << std::endl;

	for (i = 0; i < _totalContacts; i++)
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << i << "|";
		this->tab_contact[i].display_short();
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
		std::getline(std::cin,prompt);
		if (prompt.length() > 0)
			break ;
	}
	return prompt;
}

int main (void)
{
	PhoneBook phonebook;
	std::string prompt;
	long int id;

	while (42)
	{
		std::cout << "Enter ADD, SEARCH or EXIT : " << std::endl;
		std::getline(std::cin, prompt);
		if (prompt == "SEARCH")
		{
			phonebook.get_list();
			if (phonebook.get_totalContacts() > 0)
			{	
				while (1)
				{
					std::cout << "Choose an id : " << std::endl;
					std::getline(std::cin, prompt);
					if (prompt.length() == 1 && (prompt[0] >= '0' && prompt[0] <= '7'))
					{					
						id = std::stoi(prompt);
						if (id < phonebook.get_totalContacts())
						{
							phonebook.get_contact(id);
							break ;
						}
					}
				}
			}
		}
		if (prompt == "ADD")
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
		if (prompt == "EXIT")
		{
			return (0);
		}
	}

	return (0);
}