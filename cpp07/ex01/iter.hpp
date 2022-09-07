#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int len, void (*func)(const T& p)) {
	for (int i = 0; i < len; i++) {
		func(array[i]);
	}
}

template <typename T>
void print(T const &x) {
	std::cout << x << std::endl;
}

#endif
