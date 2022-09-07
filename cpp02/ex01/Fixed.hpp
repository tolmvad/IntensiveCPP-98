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
		~Fixed();

		Fixed(const Fixed& copy);
		Fixed& operator= (const Fixed& copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed(const int int_num);
		Fixed(const float float_num);
		int toInt(void) const;
		float toFloat(void) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
