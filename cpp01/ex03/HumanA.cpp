#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->_name = name;
    this->_weapon = &weapon;
    std::cout << "My name is : " << this->_name << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " is destructed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their" << this->_weapon->getType() << std::endl;
}