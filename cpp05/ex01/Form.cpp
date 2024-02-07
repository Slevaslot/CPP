#include "Form.hpp"

Form::Form(): _name("Default") {
    _sign_grade = 42;
    _exec_grade = 1;
    _is_signed = 0;
}

Form::Form(std::string name, int grade1, int grade2): _name(name) {
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

Form::Form(const Form& form): _name(form.getName()) {
    if (form.getSignGrade() > 150 || form.getExecGrade() > 150)
        GradeTooLowException();
    else if (form.getSignGrade() < 1 || form.getExecGrade() < 1)
        GradeTooHighException();
    else
    {
        _sign_grade = form.getSignGrade();
        _exec_grade = form.getExecGrade();
    }
}

Form::~Form() {}

std::string Form::getName() const {
    return _name;
}

int Form::getSignGrade() const {
    return _sign_grade;
}

int Form::getExecGrade() const {
    return _exec_grade;
}

bool Form::getIsSigned() const {
    return _is_signed;
}

void Form::GradeTooLowException() {
    throw std::invalid_argument("Form's grade too low\n");
}

void Form::GradeTooHighException() {
    throw std::invalid_argument("Form's grade too high\n");
}

std::ostream &operator<<(std::ostream& os, const Form& form){
        os << form.getName() << ", form sign grade " << form.getSignGrade() << ", form exec grade " << form.getExecGrade() << ", form signed status " << form.getIsSigned() << std::endl;
        return os;
}

int Form::beSigned(Bureaucrat &bureaucrat) {
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