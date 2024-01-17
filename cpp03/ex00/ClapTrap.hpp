#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <new>

class ClapTrap {
	private :
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;
	public :
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &Clap);
	ClapTrap &operator=(const ClapTrap &Clap);
	std::string getName();
	unsigned int getHp();
	unsigned int getEp();
	unsigned int getAd();
	void setName(std::string name);
	void setHp(unsigned int hp);
	void setEp(unsigned int ep);
	void setAd(unsigned int ad);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();

};

#endif
