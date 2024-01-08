#include "mapb.hpp"

void printContact(Contact contact)
{
	int i = -1;

	while (++i < 5)
		cout << contact.data[i] << endl;
}

Contact PhoneBook::get_contact(int nb)
{
	return (contacts[nb]);
}

void Contact::set_data(string *str)
{
	data[0] = str[0];
	data[1] = str[1];
	data[2] = str[2];
	data[3] = str[3];
	data[4] = str[4];
}

void searchContact(Contact *Contacts)
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
			if (Contacts[l].data[j].length() > 10)
			{
				cout << Contacts[l].data[j].substr(0, 9);
				cout << ".";
			}
			else
			{
				while (++i + Contacts[l].data[j].length() <= 10)
					cout << " ";
				cout << Contacts[l].data[j];
			}
			if (j != 2)
				cout << "|";
		}
		cout << endl;
	}
	cout << "ENTER INDEX : ";
	getline(cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
		printContact(Contacts[index[0] - '0']);
	else
		cout << "INCORRECT INDEX" << endl;
}

int	phonebook_func()
{
	int i = 0;
	string x;
	PhoneBook phonebook;
	Contact Contacts[8];

	Contacts[0] = phonebook.get_contact(0);
	Contacts[1] = phonebook.get_contact(1);
	Contacts[2] = phonebook.get_contact(2);
	Contacts[3] = phonebook.get_contact(3);
	Contacts[4] = phonebook.get_contact(4);
	Contacts[5] = phonebook.get_contact(5);
	Contacts[6] = phonebook.get_contact(6);
	Contacts[7] = phonebook.get_contact(7);
	getline(cin, x);
	if (x == "ADD")
	{
		cout << "FIRST NAME : ";
		getline(cin, Contacts[i % 8].data[0]);
		cout << "LAST NAME : ";
		getline(cin, Contacts[i % 8].data[1]);
		cout << "NICKNAME : ";
		getline(cin, Contacts[i % 8].data[2]);
		cout << "PHONE NUMBER : ";
		getline(cin, Contacts[i % 8].data[3]);
		cout << "DARKEST SECRET : ";
		getline(cin, Contacts[i % 8].data[4]);
		phonebook.get_contact(i % 8).set_data(Contacts[i % 8].data);
		cout << phonebook.get_contact(i % 8).data[0] << endl;
		cout << phonebook.get_contact(i % 8).data[1] << endl;
		cout << phonebook.get_contact(i % 8).data[2] << endl;
		cout << phonebook.get_contact(i % 8).data[3] << endl;
		i++;
	}
	else if (x == "SEARCH")
		searchContact(Contacts);
	else if (x == "EXIT")
		return (0);
	return (1);
}

int	main()
{

	cout << "My Awesome PhoneBook" << endl;
	while (1)
	{
		if (!phonebook_func())
			return (0);
	}
}
