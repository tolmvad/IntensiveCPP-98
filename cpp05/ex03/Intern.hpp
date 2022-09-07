#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);

		Form	*makeForm(std::string FormName, std::string FormTarget);
		Form	*newShrubberyCreationForm(const std::string& target);
		Form	*newRobotomyRequestForm(const std::string& target);
		Form	*newPresidentialPardonForm(const std::string& target);
};

#endif
