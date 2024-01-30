#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <new>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &Scav);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &Scav);
	std::string getName() const;
	unsigned int getHp() const;
	unsigned int getEp() const;
	unsigned int getAd() const;
	void setName(const std::string name);
	void setHp(const unsigned int hp);
	void setEp(const unsigned int ep);
	void setAd(const unsigned int ad);
	void guardGate();
	void attack(const std::string &target);
	void takeDamage(const unsigned int amount);
	void beRepaired(const unsigned int amount);
};

#endif
