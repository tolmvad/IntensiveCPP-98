#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);

		Bureaucrat(const std::string& name, int grade);
		const std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public std::exception {
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char * what() const throw();
		};
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& Bureaucrat);

#endif
