#include "mapb.hpp"

int	getline_protected(string *test)
{
	string ok;
	getline(cin, *test);
	if (std::cin.eof())
		return (0);
	ok = *test;
	if (ok.empty())
		return (0);
	return (1);
}

void printContact(Contact contact)
{
	int i = -1;

	while (++i < 5)
		cout << contact.getData(i) << endl;
}

int		PhoneBook::searchContact()
{
	int i;
	int j;
	int l = -1;
	string index;

	while (++l < 8)
	{
		j = -1;
		cout << "         " << l << "|";
		while (++j < 3)
		{
			i = 0;
			if (this->contacts[l].getData(j).length() > 10)
			{
				cout << this->contacts[l].getData(j).substr(0, 9);
				cout << ".";
			}
			else
			{
				while (++i + this->contacts[l].getData(j).length() <= 10)
					cout << " ";
				cout << this->contacts[l].getData(j);
			}
			if (j != 2)
				cout << "|";
		}
		cout << endl;
	}
	cout << "ENTER INDEX : ";
	if (!getline_protected(&index))
		return (0);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
		printContact(this->contacts[index[0] - '0']);
	else
		cout << "INCORRECT INDEX" << endl;
	return (1);
}


int	PhoneBook::phonebookstart()
{
	int i = 0;
	string x;
	PhoneBook phonebook;

	std::string test[5];
	cout << "My Awesome PhoneBook" << endl;
	while (1)
	{
		if (!getline_protected(&x))
				return (0);
		if (x == "ADD")
		{
			cout << "FIRST NAME : ";
			if (!getline_protected(&test[0]))
				return (0);
			this->contacts[i % 8].setData(test[0],0);
			cout << "LAST NAME : ";
			if (!getline_protected(&test[1]))
				return (0);
			this->contacts[i % 8].setData(test[1],1);
			cout << "NICKNAME : ";
			if (!getline_protected(&test[2]))
				return (0);
			this->contacts[i % 8].setData(test[2],2);
			cout << "PHONE NUMBER : ";
			if (!getline_protected(&test[3]))
				return (0);
			this->contacts[i % 8].setData(test[3],3);
			cout << "DARKEST SECRET : ";
			if (!getline_protected(&test[4]))
				return (0);
			this->contacts[i % 8].setData(test[4],4);
			i++;
		}
		if (x == "SEARCH")
		{
			if (!searchContact())
				return (0);
		}
		if (x == "EXIT")
		{
			return (0);
		}
	}
}

int	main()
{
	PhoneBook phonebook;
	phonebook.phonebookstart();
}
