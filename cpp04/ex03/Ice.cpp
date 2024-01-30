#include "Ice.hpp"

void Ice::use (ICharacter &target) {
	if (_type == "Ice")
        std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(): AMateria("Ice") {
    _type = "Ice";
}

Ice::Ice(std::string const & type) {
    _type = type;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const {
    return ((Ice *)this);
}
