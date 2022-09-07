#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class NotExist: public std::exception
{
	virtual const char* what() const throw() {
		return "Not find in array!";
	}
};

template <typename T>
typename T::iterator easyfind(T container, int finder) {
	typename T::iterator it;

	it = find(container.begin(), container.end(), finder);
	if (it == container.end())
		throw NotExist();
	else
		return (it);
}

#endif
