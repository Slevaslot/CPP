#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::isDebugOk(void) {
	debug();
}

void Harl::isInfoOk(void) {
	info();
}

void Harl::isWarningOk(void) {
	warning();
}

void Harl::isErrorOk(void) {
	error();
}

int Harl::complain( std::string level )
{
	// Harl harl;
	int	i = 0;
	void(Harl::*funct_tab[4])() = {&Harl::isDebugOk, &Harl::isInfoOk, &Harl::isWarningOk, &Harl::isErrorOk};
	std::string test[4] = {"1","2","3","4"};
	while(i < 4)
	{
		if(level == test[i])
			(this->*funct_tab[i])();
		i++;
	}
	return (1);
}

