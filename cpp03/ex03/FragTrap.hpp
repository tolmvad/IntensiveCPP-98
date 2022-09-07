#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& copy);

		FragTrap(std::string name);
		void highFivesGuys(void);
};

#endif
