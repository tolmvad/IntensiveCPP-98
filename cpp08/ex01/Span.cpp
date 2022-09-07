#include "Span.hpp"

Span::Span() {
	this->N = 0;
}

Span::~Span() {}

Span::Span(const Span& copy) {
	this->N = copy.N;
	this->vect = copy.vect;
}

Span& Span::operator=(const Span& copy) {
	if (this == &copy)
		return *this;
	this->N = copy.N;
	this->vect = copy.vect;
	return *this;
}

Span::Span(unsigned int N) {
	this->N = N;
}

void Span::addNumber(int number) {
	if (this->vect.size() == this->N)
		throw Span::FullException();
	vect.push_back(number);
}

int Span::shortestSpan() {
	std::vector<int> tmp;
	std::vector<int>::iterator it;
	int x = std::numeric_limits<int>::max();

	if (this->vect.size() < 2)
		throw ElementsException();
	tmp = this->vect;
	sort(tmp.begin(), tmp.end());
	for (it = tmp.begin(); (it != tmp.end() - 1) && x != 0; it++) {
		if (std::abs(*(it + 1) - *it) < x)
			x = *(it + 1) - *it;
	}
	return x;
}

int Span::longestSpan() {
	std::vector<int> tmp;

	tmp = this->vect;
	if (this->vect.size() < 2)
		throw ElementsException();
	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *(tmp.begin());
}

void Span::fillVector(int n) {
	for (int i = 0; i < n; i++) {
		this->addNumber(rand() % 1000);
	}
}

void Span::vectView() {
	for (size_t i = 0; i < (this->vect.size()); i++)
	{
		std::cout << vect[i] << " ";
	}
	std::cout << std::endl;
}

const char* Span::ElementsException::what() const throw()
{
	return ("Error: there are not enough elements");
}

const char* Span::FullException::what() const throw()
{
	return ("Error: too mach elements");
}
