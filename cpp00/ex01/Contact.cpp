#include "Contact.hpp"

std::string Contact::getData(int i) {
	return data[i];
}

void Contact::setData(std::string str, int i) {
	data[i] = str;
}
