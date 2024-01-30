#include "Cure.hpp"

void Cure::use (ICharacter &target) {
	if (_type == "cure")
    	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure() {
    _type = "Default";
}

Cure::Cure(std::string const & type) {
    _type = type;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const {
    return ((Cure *)this);
}
