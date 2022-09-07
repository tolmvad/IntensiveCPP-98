#include "Span.hpp"

// clang++ -std=c++98 -Wall -Wextra -Werror

int		main()
{
	srand(time(NULL));
	std::cout << "================== Default test ==================" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "=================== Empty test ===================" << std::endl;
	Span empty = Span(5);

	try {
		std::cout << empty.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}

	try {
		std::cout << empty.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "============== Lonely warrior test ===============" << std::endl;
	empty.addNumber(6);

	try {
		std::cout << empty.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}

	try {
		std::cout << empty.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "=============== Little party test ================" << std::endl;

	empty.addNumber(3);

	try {
		std::cout << "longestSpan() = " << empty.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}

	try {
		std::cout << "shortestSpan() = " << empty.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() <<  std::endl;
	}
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "================= 0_o first test =================" << std::endl;
	empty.addNumber(17);
	empty.addNumber(9);
	empty.addNumber(11);

	std::cout << "shortestSpan() = " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan() = " << sp.longestSpan() << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "================= auto fill test =================" << std::endl;

	Span rand_vec(30);
	rand_vec.addNumber(222);
	rand_vec.fillVector(29);
	rand_vec.vectView();
	std::cout << "shortestSpan() = " << rand_vec.shortestSpan() << std::endl;
	std::cout << "longestSpan() = " << rand_vec.longestSpan() << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	return 0;
}
