#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
	Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) {
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	(void)copy;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();

	std::ofstream file_out;
	std::string file_name = this->getTarget() + "_shrubbery";

	file_out.open(file_name);
	if (!file_out.is_open())
	{
		std::cerr << "Error: cannot open " << file_name << std::endl;
		exit(1);
	}
	else
	{
		file_out << "   _\\/_" << std::endl;
		file_out << "    /\\" << std::endl;
		file_out << "    /\\" << std::endl;
		file_out << "   /  \\" << std::endl;
		file_out << "   /~~\\o" << std::endl;
		file_out << "  /o   \\" << std::endl;
		file_out << " /~~*~~~\\" << std::endl;
		file_out << " o/   o \\" << std::endl;
		file_out << "/~~~~~~~~\\~`"<< std::endl;
		file_out << "/__*______\\" << std::endl;
		file_out << "    ||" << std::endl;
		file_out << "  \\====/" << std::endl;
		file_out << "   \\__/" << std::endl;
	}
	file_out.close();
}
