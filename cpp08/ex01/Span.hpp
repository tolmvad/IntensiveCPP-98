#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits>

class Span
{
	private:
		unsigned int N;
		std::vector<int> vect;

	public:
		Span();
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& copy);

		Span(unsigned int N);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void fillVector(int n);
		void vectView();

		class FullException: public std::exception {
			virtual const char* what() const throw();
		};

		class ElementsException: public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
