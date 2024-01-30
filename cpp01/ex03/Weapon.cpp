#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
        this->setType(type);
        std::cout << this->_type << " is created" << std::endl;
}

Weapon::~Weapon()
{
        std::cout << "Weapon is destructed" << std::endl;
}

const std::string Weapon::getType()
{
        return (this->_type);
}

void Weapon::setType(std::string type)
{
        this->_type = type;
}
