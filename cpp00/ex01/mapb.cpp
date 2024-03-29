#include "Contact.hpp"
#include "PhoneBook.hpp"

int getline_protected(std::string *test)
{
	std::string ok;
	getline(std::cin, *test);
	if (std::cin.eof())
		return (0);
	ok = *test;
	return (1);
}

void printContact(Contact contact)
{
	std::cout << "FIRST NAME     : " << contact.getData(0) << std::endl;
	std::cout << "LAST NAME      : " << contact.getData(1) << std::endl;
	std::cout << "NICKNAME       : " << contact.getData(2) << std::endl;
	std::cout << "PHONE NUMBER   : " << contact.getData(3) << std::endl;
	std::cout << "DARKEST SECRET : " << contact.getData(4) << std::endl;
}

int PhoneBook::searchContact()
{
	int i;
	int j;
	int l = -1;
	std::string index;

	while (++l < 8)
	{
		j = -1;
		std::cout << "         " << l << "|";
		while (++j < 3)
		{
			i = 0;
			if (this->contacts[l].getData(j).length() > 10)
			{
				std::cout << this->contacts[l].getData(j).substr(0, 9);
				std::cout << ".";
			}
			else
			{
				while (++i + this->contacts[l].getData(j).length() <= 10)
					std::cout << " ";
				std::cout << this->contacts[l].getData(j);
			}
			if (j != 2)
				std::cout << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "ENTER INDEX    : ";
	if (!getline_protected(&index))
		return (0);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
		printContact(this->contacts[index[0] - '0']);
	else
		std::cout << "INCORRECT INDEX" << std::endl;
	return (1);
}

int PhoneBook::phonebookstart()
{
	int i = 0;
	std::string input;
	std::string input0;
	std::string input1;
	std::string input2;
	std::string input3;
	std::string input4;

	std::cout << "My Awesome PhoneBook" << std::endl;
	std::cout << "commands : ADD (add a contact), SEARCH (search a contact in the phonebook) and EXIT (exit the programm)" << std::endl;
	while (1)
	{
		std::cout << "-> ";
		if (!getline_protected(&input))
			return (0);
		if (input == "ADD")
		{
			std::cout << "FIRST NAME     : ";
			if (!getline_protected(&input0))
				return (0);
			std::cout << "LAST NAME      : ";
			if (!getline_protected(&input1))
				return (0);
			std::cout << "NICKNAME       : ";
			if (!getline_protected(&input2))
				return (0);
			std::cout << "PHONE NUMBER   : ";
			if (!getline_protected(&input3))
				return (0);
			std::cout << "DARKEST SECRET : ";
			if (!getline_protected(&input4))
				return (0);
			if (input0.empty() || input1.empty() || input2.empty() || input3.empty() || input4.empty())
			{
				std::cout << "error: Contact's information cannot be empty try again" << std::endl;
				continue ;
			}
			this->contacts[i % 8].setData(input0, 0);
			this->contacts[i % 8].setData(input1, 1);
			this->contacts[i % 8].setData(input2, 2);
			this->contacts[i % 8].setData(input3, 3);
			this->contacts[i % 8].setData(input4, 4);
			i++;
		}
		if (input == "SEARCH")
		{
			if (!searchContact())
				return (0);
		}
		if (input == "EXIT")
		{
			return (0);
		}
	}
}

int main()
{
	PhoneBook phonebook;
	phonebook.phonebookstart();
}
