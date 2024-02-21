#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm::AForm(): _name("Default") {
    _sign_grade = 42;
    _exec_grade = 1;
    _is_signed = 0;
}

AForm::AForm(std::string name, int grade1, int grade2): _name(name) {
    if (grade1 > 150 || grade2 > 150)
        throw GradeTooLowException();
    else if (grade1 < 1 || grade2 < 1)
        throw GradeTooHighException();
    else
    {
        _sign_grade = grade1;
        _exec_grade = grade2;
        _is_signed = 0;
    }
}

AForm::AForm(const AForm& Aform): _name(Aform.getName()) {
    if (Aform.getSignGrade() > 150 || Aform.getExecGrade() > 150)
        throw GradeTooLowException();
    else if (Aform.getSignGrade() < 1 || Aform.getExecGrade() < 1)
        throw GradeTooHighException();
    else
    {
        _sign_grade = Aform.getSignGrade();
        _exec_grade = Aform.getExecGrade();
    }
}

AForm::~AForm() {}

std::string AForm::getName() const {
    return _name;
}

int AForm::getSignGrade() const {
    return _sign_grade;
}

int AForm::getExecGrade() const {
    return _exec_grade;
}

bool AForm::getIsSigned() const {
    return _is_signed;
}

const char* AForm::GradeTooHighException:: what() const throw() {
	return "AForm's grade too high";
}

const char* AForm::GradeTooLowException:: what() const throw() {
	return "AForm's grade too low";
}

const char* AForm::FormIsNotSignedException:: what() const throw() {
    return "AForm is not signed";
}

std::ostream &operator<<(std::ostream& os, const AForm& Aform){
        os << Aform.getName() << ", Aform sign grade " << Aform.getSignGrade() << ", Aform exec grade " << Aform.getExecGrade() << ", Aform signed status " << Aform.getIsSigned() << std::endl;
        return os;
}

void AForm::execute(Bureaucrat &bureaucrat) {
    if (!_is_signed)
        FormIsNotSignedException();
    else if (bureaucrat.getGrade() > _exec_grade) {
        throw GradeTooHighException();
    }
	std::cout << bureaucrat.getName() << " executes " << _name << std::endl;
    executeConcrete();
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _sign_grade)
        throw GradeTooHighException();
    else
        _is_signed = 1;
}