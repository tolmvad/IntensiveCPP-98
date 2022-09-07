#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

typedef struct s_Data {
	std::string gun;
	int damage;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
