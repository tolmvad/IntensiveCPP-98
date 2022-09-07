#include "Data.hpp"

int		main()
{
	Data data = {"Sword", 10};
	uintptr_t uintptr;
	Data *res;

	std::cout << "Data: we have " << data.gun;
	std::cout << " with damage " << data.damage << std::endl;
	uintptr = serialize(&data);
	std::cout << "The value of uinptr: " << uintptr << std::endl;
	res = deserialize(uintptr);
	std::cout << "res: " << res->gun << " with " << res->damage << " damage " <<std::endl;
	return (0);
}
