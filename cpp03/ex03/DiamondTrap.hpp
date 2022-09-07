#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap& operator=(const DiamondTrap& copy);

		DiamondTrap(std::string name);
		void attack(const std::string& target);
		void whoAmI();
};

#endif
