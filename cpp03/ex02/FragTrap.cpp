#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap : Default constructor called" << std::endl;
	_name = "Default";
	_hp = 100;
	_ep = 50;
	_ad = 30;
	_maxHp = _hp;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap : Name constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 30;
	_maxHp = _hp;
}

FragTrap::FragTrap(FragTrap &Frag): ClapTrap(Frag) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = Frag;
}

FragTrap &FragTrap::operator=(const FragTrap &Frag) {
	this->_name = Frag._name;
	this->_hp = Frag._hp;
	this->_ep = Frag._ep;
	this->_ad = Frag._ad;
	this->_maxHp = Frag._maxHp;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap : Destructor called" << std::endl;
}

std::string FragTrap::getName() {
	return (_name);
}

unsigned int FragTrap::getHp() {
	return (_hp);
}

unsigned int FragTrap::getEp() {
	return (_ep);
}

unsigned int FragTrap::getAd() {
	return (_ad);
}

void FragTrap::setName(std::string name) {
	_name = name;
}

void FragTrap::setHp(unsigned int hp) {
	_hp = hp;
}

void FragTrap::setEp(unsigned int ep) {
	_ep = ep;
}

void FragTrap::setAd(unsigned int ad) {
	_ad = ad;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap's highFive request is accepted" << std::endl;
}
