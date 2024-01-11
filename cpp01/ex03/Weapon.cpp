#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
        this->setType(type);
        std::cout << this->_type << " is picked" << std::endl;
}

Weapon::~Weapon()
{
        std::cout << "Weapon is destructed" << std::endl; 
}
std::string Weapon::getType()
{
   return (this->_type);
}
void Weapon::setType(std::string type)
{
        this->_type = type;
}