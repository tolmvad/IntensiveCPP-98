#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap someTrap("Blocj");

	someTrap.clapStat();
	someTrap.attack("some enemy");
	someTrap.clapStat();

	someTrap.takeDamage(50);
	someTrap.clapStat();

	someTrap.beRepaired(20);
	someTrap.clapStat();

	someTrap.guardGate();
	someTrap.takeDamage(15);
	someTrap.clapStat();

	someTrap.guardGate();
	someTrap.takeDamage(15);
	someTrap.clapStat();

	return 0;
}
