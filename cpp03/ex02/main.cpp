#include "FragTrap.hpp"

int	main(void) {

	FragTrap someTrap("Killa");

	someTrap.clapStat();
	someTrap.attack("some enemy");
	someTrap.clapStat();

	someTrap.takeDamage(50);
	someTrap.clapStat();

	someTrap.beRepaired(20);
	someTrap.clapStat();

	someTrap.takeDamage(15);
	someTrap.clapStat();

	someTrap.highFivesGuys();

	return 0;
}
