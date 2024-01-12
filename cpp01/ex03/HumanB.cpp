#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    std::cout << "My name is : " << this->_name << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " is destructed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}