#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap someTrap("Frost");

	someTrap.clapStat();
	someTrap.attack("some enemy");

	someTrap.takeDamage(5);
	someTrap.clapStat();

	someTrap.beRepaired(2);
	someTrap.clapStat();

	someTrap.takeDamage(15);
	return 0;
}
