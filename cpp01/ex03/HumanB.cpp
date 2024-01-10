#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
    std::cout << "HumanB is destructed" << std::endl; 
}

void HumanB::attack()
{
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}