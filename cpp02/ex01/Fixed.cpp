#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator= (const Fixed& copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::Fixed(const int int_num) {
	std::cout << "Int constructor called" << std::endl;
	this->value = int_num << this->NOF_BITS;
}

Fixed::Fixed(const float float_num) {
	int power = 1 << this->NOF_BITS;

	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_num * power);
}

int Fixed::toInt(void) const {
	return (this->value >> this->NOF_BITS);
}

float	Fixed::toFloat() const {
	int power = 1 << this->NOF_BITS;
	float float_num = (float)this->value / power;

	return (float_num);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}
