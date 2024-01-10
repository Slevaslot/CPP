#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name(name), _weapon(weapon)
{
    this->_name = name;
    this->_weapon = weapon;
}

HumanA::~HumanA()
{
    std::cout << "HumanB is destructed" << std::endl; 
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}