#include "Array.hpp"

#define LEN 10

int main(void) {
	srand(time(NULL));

	Array<int> template_arr(LEN);
	int *default_arr = new int[LEN];

	for (int i = 0; i < LEN; i++)
	{
		int rand_int = std::rand() % 100;
		template_arr[i] = rand_int;
		default_arr[i] = rand_int;
	}

	std::cout << "template_arr =";
	for (int i = 0; i < LEN; i++)
	{
		std::cout << " " << template_arr[i];
	}
	std::cout << "\n================\n";
	std::cout << " default_arr =";
	for (int i = 0; i < LEN; i++)
	{
		std::cout << " " << default_arr[i];
	}
	std::cout << std::endl;
	delete [] default_arr;

	std::cout << "\n======== Wrong index test ========\n";
	try {
		std::cout << "bad value = " << template_arr[-2] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "max value = " << template_arr[LEN] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "normal value = " << template_arr[4] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
