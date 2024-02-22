#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default") {
    _grade = 42;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): _name(bureaucrat.getName()) {
    if (bureaucrat.getGrade() > 150)
        throw GradeTooLowException();
    else if (bureaucrat.getGrade() < 1)
        throw GradeTooHighException();
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

const char* Bureaucrat::GradeTooHighException:: what() const throw() {
	return "Bureaucrat's grade too high";
}

const char* Bureaucrat::GradeTooLowException:: what() const throw() {
	return "Bureaucrat's grade too low";
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << _name << " couldn't sign " <<  form.getName() << " because " << e.what() << std::endl;
    }
}


void Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
	}
	catch (std::exception& e) {
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
    if (_grade == 1)
        throw GradeTooHighException();
    else
        --_grade;
}

void Bureaucrat::decrementGrade() {
    if (_grade == 150)
        throw GradeTooLowException();
    else
        ++_grade;
}
