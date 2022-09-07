#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		int gate;

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& copy);

		ScavTrap(std::string name);
		void attack(const std::string& target);
		void guardGate();
};

#endif
