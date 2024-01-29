#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
	std::string	data[5];

  public:
    std::string getData(int i);
    void setData(std::string str, int i);
};

#endif
