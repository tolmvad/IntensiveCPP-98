#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie *dark_legion = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string tmp_name = name + std::to_string(i);
		dark_legion[i].setName(tmp_name);
	}
	return dark_legion;
}
