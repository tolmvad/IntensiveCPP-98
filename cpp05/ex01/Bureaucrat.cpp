#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade) {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	this->grade = copy.grade;

	return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

const std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade() {
	(this->grade)++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	(this->grade)--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Grade to high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: Grade to low\n");
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " sign " << form.getName() << std::endl;
	} catch(const std::exception& e) {
		std::cout << this->name << " cannot sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat) {
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
	return out;
}
