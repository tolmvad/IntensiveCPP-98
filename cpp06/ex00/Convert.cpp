#include "Convert.hpp"

Convert::Convert() {
	this->value = NULL;
	this->type = 0;
	this->value_char = 0;
	this->value_int = 0;
	this->value_float = 0;
	this->value_double = 0;
}

Convert::~Convert() {}

Convert::Convert(const Convert& copy) {
	this->value = copy.value;
	this->type = copy.type;
	this->value_char = copy.value_char;
	this->value_int = copy.value_int;
	this->value_float = copy.value_float;
	this->value_double = copy.value_double;
}

Convert& Convert::operator=(const Convert& copy) {
	this->value = copy.value;
	this->type = copy.type;
	this->value_char = copy.value_char;
	this->value_int = copy.value_int;
	this->value_float = copy.value_float;
	this->value_double = copy.value_double;

	return (*this);
}

Convert::Convert(char* value) {
	this->value = value;
	this->type = 0;
	this->value_char = 0;
	this->value_int = 0;
	this->value_float = 0;
	this->value_double = 0;
	if (isChar(this->value))
		charCast();
	else if (isSomeOfFloat(this->value))
		someCast();
	else if (isStr(this->value))
		this->type = -1;
	else
		digitCast();
}

void Convert::digitCast() {
	this->value_double = static_cast<double>(atof(this->value));
	this->value_float = static_cast<float>(this->value_double);
	this->value_int = static_cast<int>(this->value_double);
	this->value_char = static_cast<char>(this->value_int);
	this->type = 1;

}

void Convert::someCast() {
	this->value_double = static_cast<double>(atof(this->value));
	this->value_float = atof(this->value);
	this->type = 0;
}

int Convert::isSomeOfFloat(std::string str) {
	for (size_t i = 0; str[i]; i++) {
		str[i] = tolower(str[i]);
	}
	if (str == "nan" || str == "nanf")
		return 1;
	if (str == "-inf" || str == "-inff")
		return 1;
	if (str == "inf" || str == "inff")
		return 1;
	return 0;
}

void Convert::charCast() {
	this->value_char = this->value[0];
	this->value_int = static_cast<int>(this->value_char);
	this->value_float = static_cast<float>(this->value_int);
	this->value_double = static_cast<double>(this->value_int);
	this->type = 1;
}

int Convert::isChar(std::string str) {
	if (str.length() == 1 && !isdigit(str[0]))
		return 1;
	return 0;
}

int Convert::isStr(char* str) {
	int dot = 0;
	int i = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	if (str[i] == '.')
		return 1;
	while (str[i] != '\0') {
		if (str[i] == '.')
			dot++;
		else if (str[i] == 'f' && str[i + 1] == '\0')
			return 0;
		else if (!isdigit(str[i]))
			return 1;
		i++;
	}
	if (dot > 1)
		return 1;
	return 0;
}

void Convert::printChar() {
	if (this->type < 1 || this->value_int > 127 || this->value_int < 0)
		std::cout << "char: " << IMP << "\n";
	else if (this->value_int < 27 || this->value_int == 127)
		std::cout << "char: " << NDP << "\n";
	else
		std::cout << "char: '" << this->value_char << "'\n";
}

void Convert::printInt() {
	if (this->type < 1)
		std::cout << "int: " << IMP << "\n";
	else if (std::numeric_limits<int>::min() > this->value_double
				|| std::numeric_limits<int>::max() < this->value_double)
		std::cout << "int: " << IMP << std::endl;
	else
		std::cout << "int: " << this->value_int << std::endl;
}

void Convert::printFloat() {
	if (this->type < 0)
		std::cout << "float: " << IMP << "\n";
	else if (std::abs(this->value_float) < 1000000) {
		if (this->value_float - static_cast<float>(this->value_int) != 0)
			std::cout << "float: " << this->value_float << "f" << std::endl;
		else
			std::cout << "float: " << this->value_float << ".0f\n";
	}
	else if (this->type == 0)
		std::cout << "float: " << this->value_float << "f" << std::endl;
	else
		std::cout << "float: " << this->value_float << std::endl;
}

void Convert::printDouble() {
	if (this->type < 0)
		std::cout << "double: " << IMP << "\n";
	else if (std::abs(this->value_double) < 1000000) {
		if (this->value_double - static_cast<double>(this->value_int) != 0)
			std::cout << "double: " << this->value_double << std::endl;
		else
			std::cout << "double: " << this->value_double << ".0\n";
	}
	else
		std::cout << "double: " << this->value_double << std::endl;
}

void Convert::printTypes() {
	//std::cout << "type is " << this->type << std::endl;
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
	//std::cout << "==========\n";
}
