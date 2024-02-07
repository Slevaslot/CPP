#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int grade1, int grade2): AForm(name, grade1, grade2) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Robot): AForm(Robot) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) {
	if (!_is_signed)
		std::cout << "error : " << _name << " is not signed." << std::endl;
	else if (executor.getGrade() > _exec_grade)
		std::cout << "error : " << executor.getName() << "'s grade is too low to execute " << _name << std::endl;
	else 
		std::cout << executor.getName() << " executed " << _name << std::endl;
}