#include "AForm.hpp"

AForm::AForm(): _name("Default") {
    _sign_grade = 42;
    _exec_grade = 1;
    _is_signed = 0;
}

AForm::AForm(std::string name, int grade1, int grade2): _name(name) {
    if (grade1 > 150 || grade2 > 150)
        GradeTooLowException();
    else if (grade1 < 1 || grade2 < 1)
        GradeTooHighException();
    else
    {
        _sign_grade = grade1;
        _exec_grade = grade2;
        _is_signed = 0;
    }
}

AForm::AForm(const AForm& Aform): _name(Aform.getName()) {
    if (Aform.getSignGrade() > 150 || Aform.getExecGrade() > 150)
        GradeTooLowException();
    else if (Aform.getSignGrade() < 1 || Aform.getExecGrade() < 1)
        GradeTooHighException();
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

void AForm::GradeTooLowException() {
    throw std::invalid_argument("AForm's grade too low\n");
}

void AForm::GradeTooHighException() {
    throw std::invalid_argument("AForm's grade too high\n");
}

std::ostream &operator<<(std::ostream& os, const AForm& Aform){
        os << Aform.getName() << ", Aform sign grade " << Aform.getSignGrade() << ", Aform exec grade " << Aform.getExecGrade() << ", Aform signed status " << Aform.getIsSigned() << std::endl;
        return os;
}

int AForm::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _sign_grade)
    {
        std::cout << bureaucrat.getName() << " couldn't sign " <<  _name << " because ";
        bureaucrat.GradeTooLowException();
        return 0;
    }
    else
    {
        _is_signed = 1;
        return 1;
    }
}