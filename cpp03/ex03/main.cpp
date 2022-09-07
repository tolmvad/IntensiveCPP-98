#include "DiamondTrap.hpp"

int	main(void) {

	DiamondTrap someTrap("DIaMoNd");

	someTrap.clapStat();
	someTrap.attack("some enemy");
	someTrap.clapStat();

	someTrap.takeDamage(50);
	someTrap.clapStat();

	someTrap.beRepaired(20);
	someTrap.clapStat();

	someTrap.takeDamage(15);
	someTrap.clapStat();

	someTrap.guardGate();
	someTrap.highFivesGuys();
	someTrap.guardGate();

	someTrap.whoAmI();

	return 0;
}
