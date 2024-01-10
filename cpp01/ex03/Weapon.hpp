#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
#include <new>

class Weapon {
   private:
	std::string	_type;

  public:
    void setType(std::string type);
    std::string getType();
    Weapon(std::string name);
    ~Weapon();
};

#endif