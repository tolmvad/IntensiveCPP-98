#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " say: ";
	i->makeSound();
	std::cout << i->getType() << " say: ";
	j->makeSound();
	std::cout << "Animal say: ";
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	WrongAnimal* duck = new WrongCat();

	std::cout << duck->getType() << " say: ";
	duck->makeSound();

	delete duck;
	return 0;
}

//class A
//{
//	public:
//		A() { std::cout << "A\n"; }
//		virtual void intro() const { std::cout << "this is A\n"; }
//		virtual ~A() { std::cout << "end A\n"; }
//	private:
//};

//class B: public A
//{
//	public:
//		B() { std::cout << "B\n"; }
//		void intro() const { std::cout << "this is B\n"; }
//		~B() { std::cout << "end B\n"; }
//};

//int main()
//{
//	A* b = new B();
//	b->intro();
//	delete b;
//	return 0;
//}
