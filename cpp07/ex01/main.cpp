#include "iter.hpp"



int main(void) {
	int tab[] = {1, 3, 4, 5, 100, 22, 54};
	std::string s_tab[3] = {"This", "is", "test!"};

	iter(tab, 7, print);
	std::cout << "===========" << std::endl;
	iter(s_tab, 3, print);

	return 0;
}
