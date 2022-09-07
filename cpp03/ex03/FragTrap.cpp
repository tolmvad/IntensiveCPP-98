#include "FragTrap.hpp"


FragTrap::FragTrap() {
	this->name = "NaN";
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy) {
	this->name = copy.name;
	this->hit_point = copy.hit_point;
	this->energy_point = copy.energy_point;
	this->attack_damage = copy.attack_damage;

	return (*this);
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->name << ": Dudeeeee give me high fives!" << std::endl;
}
