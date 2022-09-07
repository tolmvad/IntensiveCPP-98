#include "Zombie.hpp"

Zombie::Zombie(std::string input) {
	this->name = input;
}

Zombie::~Zombie(){
	std::cout << this->name << " return in grave" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
