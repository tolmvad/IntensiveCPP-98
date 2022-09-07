#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);

		virtual void makeSound();
};

#endif