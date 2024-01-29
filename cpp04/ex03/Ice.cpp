#include "Ice.hpp"

void Ice::use (ICharacter &target) {
	if (_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(): AMateria("Ice") {
    _type = "Ice";
}

Ice::Ice(std::string const & type) {
    _type = type;
}

Ice::~Ice() {
    delete(this);
}

Ice* Ice::clone() const {
    return ((Ice *)this);
}