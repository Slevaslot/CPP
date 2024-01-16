#include "Zombie.hpp"

Zombie::~Zombie() {
    std::cout << this->name << " is dead!" << std::endl;
}

void    Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string str) {
	name = str;
}

std::string Zombie::getName() {
    return name;
}
