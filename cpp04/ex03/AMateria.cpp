#include "AMateria.hpp"

AMateria::AMateria() {
    _type = "Default";
}

AMateria::AMateria(std::string const & type) {
    _type = type;
}

AMateria::~AMateria() {
    // std::cout << "Amateria destructor called" << std::endl;
}


std::string const  & AMateria::getType() const {
    return (_type);
}

void AMateria::setType(std::string type) {
    _type = type;
}

AMateria* AMateria::clone() const {
    return ((AMateria *)this);
}

void AMateria::use (ICharacter& target) {
    if (_type != "ice" && _type != "cure")
        std::cout << "no spell types to cast on " << target.getName() << std::endl;
}
