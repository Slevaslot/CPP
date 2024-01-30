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
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &Clap);
	ClapTrap &operator=(const ClapTrap &Clap);
	std::string getName() const;
	unsigned int getHp() const;
	unsigned int getEp() const;
	unsigned int getAd() const;
	void setName(const std::string name);
	void setHp(const unsigned int hp);
	void setEp(const unsigned int ep);
	void setAd(const unsigned int ad);
	void attack(const std::string &target);
	void takeDamage(const unsigned int amount);
	void beRepaired(const unsigned int amount);
	~ClapTrap();

};

#endif
