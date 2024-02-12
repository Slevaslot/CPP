#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& Presid): AForm(Presid)
{
	*this = Presid;
}

std::string PresidentialPardonForm::getTarget() const {
	return (_target);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& Presid)
{
	_target = Presid.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::executeConcrete() const{

	std::cout << _target
			  << " has been pardoned by Zaphod Beeblebrox" 
			  << std::endl;
}