#include "Zombie.hpp"

int	main(void) {
	Zombie foo("Foo");
	foo.announce();

	Zombie *memo = newZombie("Memo");
	memo->announce();
	delete(memo);

	randomChump("fgdrgbgtqgwbeqegfbwergrewrg");

	return 0;
}
