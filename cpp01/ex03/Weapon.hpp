#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <new>

class Weapon {
   private:
	std::string	_type;

  public:
    void setType(std::string type);
    const std::string getType();
    Weapon(std::string name);
    ~Weapon();
};

#endif
