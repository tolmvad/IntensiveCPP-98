#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool indicatesSigned;
		const int gradeSign;
		const int gradeExecute;
		const std::string target;

	public:
		Form();
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& copy);

		Form(const std::string& name, const int gradeSign, const int gradeExecute,
				const std::string& target);
		const std::string getName() const;
		const std::string getTarget() const;
		bool getIndicatesSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception {
			const	char*	what() const throw();
		};

		class GradeTooLowException: public std::exception {
			const	char*	what() const throw();
		};
};

std::ostream& operator<< (std::ostream& out, const Form& Form);

#endif
