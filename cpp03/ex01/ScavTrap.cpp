#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
	this->name = copy.name;
	this->hit_point = copy.hit_point;
	this->energy_point = copy.energy_point;
	this->attack_damage = copy.attack_damage;

	return (*this);
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	this->gate = 0;
	std::cout << "ScavTrap constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energy_point < 1)
		std::cout << "ScavTrap " << this->name << " don't have energy" << std::endl;
	else {
		(this->energy_point)--;
		std::cout << "ScavTrap " << this->name << " attacks ";
		std::cout << target << ", causing " << this->attack_damage;
		std::cout << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	if (this->gate == 0) {
		std::cout << "ScavTrap " << this->name << " now in Gate keeper mode." << std::endl;
		(this->gate)++;
	} else {
		std::cout << "ScavTrap " << this->name << " off Gate keeper mode." << std::endl;
		(this->gate)--;
	}
}
