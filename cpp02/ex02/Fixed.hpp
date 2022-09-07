#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int NOF_BITS = 8;

	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int int_num);
		Fixed(const float float_num);
		~Fixed();

		Fixed& operator= (const Fixed& copy);
		bool operator>(const Fixed& d) const;
		bool operator<(const Fixed& d) const;
		bool operator>=(const Fixed& d) const;
		bool operator<=(const Fixed& d) const;
		bool operator==(const Fixed& d) const;
		bool operator!=(const Fixed& d) const;
		Fixed operator+(const Fixed& d);
		Fixed operator-(const Fixed& d);
		Fixed operator*(const Fixed& d);
		Fixed operator/(const Fixed& d);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed& min(Fixed& value1, Fixed& value2);
		static const Fixed& min(const Fixed& value1, const Fixed& value2);
		static Fixed& max(Fixed& value1, Fixed& value2);
		static const Fixed& max(const Fixed& value1, const Fixed& value2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
