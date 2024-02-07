#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default") {
    _grade = 42;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    if (grade > 150)
        GradeTooLowException();
    else if (grade < 1)
        GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): _name(bureaucrat.getName()) {
    if (bureaucrat.getGrade() > 150)
        GradeTooLowException();
    else if (bureaucrat.getGrade() < 1)
        GradeTooHighException();
    else
        _grade = bureaucrat.getGrade();
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::GradeTooLowException() {
    throw std::invalid_argument("Bureaucrat's grade too low\n");
}

void Bureaucrat::GradeTooHighException() {
    throw std::invalid_argument("Bureaucrat's grade too high\n");
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat){
        os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
        return os;
}

void Bureaucrat::signForm(Form &form) {
    if (!form.beSigned(*this))
        ;
    else
        std::cout << _name << " signed " << form.getName() << std::endl;
}