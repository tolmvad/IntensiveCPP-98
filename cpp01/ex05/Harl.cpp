#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void) {
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don't put enough! If you did I would not have to ask ";
	std::cout << "for it!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std:: cout << "I've been coming here for years and you just started working ";
	std::cout << "here last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::choise(std::string lvl) {
	std::string comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4; i++)
		if (comments[i] == lvl)
			(this->*functions[i])();
}
