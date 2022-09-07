#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>

# define IMP "impossible"
# define NDP "non displayable"

class Convert
{
	private:
		char* value;
		int type;
		int value_int;
		char value_char;
		double value_double;
		float value_float;

		int isStr(char* str);
		int isChar(std::string str);
		int isSomeOfFloat(std::string str);
		void charCast();
		void someCast();
		void digitCast();

	public:
		Convert();
		~Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& copy);

		Convert(char* value);
		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
		void printTypes();
};

#endif
