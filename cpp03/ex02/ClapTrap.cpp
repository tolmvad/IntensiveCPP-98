#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
	this->name = copy.name;
	this->hit_point = copy.hit_point;
	this->energy_point = copy.energy_point;
	this->attack_damage = copy.attack_damage;

	return (*this);
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target) {
	if (this->energy_point < 1)
		std::cout << "ClapTrap " << this->name << " don't have energy" << std::endl;
	else {
		(this->energy_point)--;
		std::cout << "ClapTrap " << this->name << " attacks ";
		std::cout << target << ", causing " << this->attack_damage;
		std::cout << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hit_point = this->hit_point - amount;
	if (this->hit_point < 0)
		std::cout << "ClapTrap " << this->name << " died"<< std::endl;
	else
		std::cout << "ClapTrap " << this->name << " take " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_point < 1)
		std::cout << "ClapTrap " << this->name << " don't have energy" << std::endl;
	else {
		(this->energy_point)--;
		this->hit_point = this->hit_point + amount;
		std::cout << "ClapTrap " << this->name << " repair " << amount << " HP" << std::endl;
	}
}

void ClapTrap::clapStat() {
	std::cout << this->name << " | ";
	std::cout << "HP: " << this->hit_point << " | ";
	std::cout << "EP: " << this->energy_point << " | ";
	std::cout << "DMG: " << this->attack_damage << std::endl;
}
