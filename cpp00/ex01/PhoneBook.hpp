#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
	Contact contacts[8];

	public:
	int	phonebookstart();
	int	searchContact();
	Contact getContact(int i);
};

#endif
