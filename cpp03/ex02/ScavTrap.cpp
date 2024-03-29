#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap : Default constructor called" << std::endl;
	_name = "Default";
	_hp = 100;
	_ep = 50;
	_ad = 20;
	_maxHp = _hp;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
	std::cout << "ScavTrap : Name constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	_maxHp = _hp;
}

ScavTrap::ScavTrap(const ScavTrap &Scav): ClapTrap(Scav) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = Scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &Scav) {
	this->_name = Scav._name;
	this->_hp = Scav._hp;
	this->_ep = Scav._ep;
	this->_ad = Scav._ad;
	this->_maxHp = Scav._maxHp;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Scavtrap : Destructor called" << std::endl;
}

std::string ScavTrap::getName() const{
	return (_name);
}

unsigned int ScavTrap::getHp() const{
	return (_hp);
}

unsigned int ScavTrap::getEp() const{
	return (_ep);
}

unsigned int ScavTrap::getAd() const{
	return (_ad);
}

void ScavTrap::setName(const std::string name) {
	_name = name;
}

void ScavTrap::setHp(const unsigned int hp) {
	_hp = hp;
}

void ScavTrap::setEp(const unsigned int ep) {
	_ep = ep;
}

void ScavTrap::setAd(const unsigned int ad) {
	_ad = ad;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in GateKeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " does not have enough energy points." << std::endl;
	else {
		--_ep;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage !" << std::endl;
	}
}
