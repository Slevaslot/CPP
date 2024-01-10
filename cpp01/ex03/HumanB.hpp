#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include <new>
#include "Weapon.hpp"

class HumanB {

  private:
    std::string _name;
    Weapon *_weapon;
  public:
    void setWeapon(Weapon& weapon);
    HumanB(std::string name);
    ~HumanB();
    void attack();
};

#endif