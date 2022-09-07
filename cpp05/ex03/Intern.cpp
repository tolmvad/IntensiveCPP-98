#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& copy) {
	(void)copy;
}

Intern& Intern::operator=(const Intern& copy) {
	(void)copy;

	return *this;
}

Form	*Intern::newShrubberyCreationForm(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::newRobotomyRequestForm(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

Form	*Intern::newPresidentialPardonForm(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string FormName, std::string FormTarget) {
	Form *tmp;

	tmp = NULL;
	std::string Forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	Form* (Intern::*functions[3])(const std::string&)
		= {&Intern::newShrubberyCreationForm,
		   &Intern::newRobotomyRequestForm,
		   &Intern::newPresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (Forms[i] == FormName)
		{
			tmp = (this->*functions[i])(FormTarget);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return (tmp);
		}
	}
	std::cout << "Intern has an issue in order to create an appropriate form" << std::endl;
	return (tmp);
}



