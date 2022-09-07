#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{
	Intern Tom;

	Form *form1;
	form1 = Tom.makeForm("Form which is differ from ours", "Paul");
	delete form1;

	Form *form2;
	form2 = Tom.makeForm("ShrubberyCreationForm", "Louis");
	delete form2;

	Form *form3;
	form3 = Tom.makeForm("RobotomyRequestForm", "Martin");
	delete form3;

	Form *form4;
	form4 = Tom.makeForm("PresidentialPardonForm", "Alex");
	delete form4;

	return 0;
}
