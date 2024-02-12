#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 25, 5)
{
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 25, 5)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Robot): AForm(Robot)
{
	*this = Robot;
}

std::string RobotomyRequestForm::getTarget() const {
	return (_target);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& Robot)
{
	_target = Robot.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeConcrete() const {
	static int nb = 1;
	if (nb % 2 != 0)
		std::cout << "BRRRrrrr... " << _target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << _target <<"'s robotomization has failed." << std::endl;
	nb++;
}