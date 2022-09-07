#include "Zombie.hpp"

int	main(void) {
	Zombie *legion = zombieHorde(5, "Stive");

	for (int i = 0; i < 5; i++)
		legion[i].announce();
	delete [] legion;

	return 0;
}
