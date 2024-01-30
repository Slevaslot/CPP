#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " is born" << std::endl;
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
    std::cout << this->_name << " picks " << weapon.getType() << std::endl;
}
