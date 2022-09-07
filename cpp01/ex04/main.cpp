#include <iostream>
#include <fstream>
#include <string>

int	empty_string(std::string s1, std::string s2) {
	if (!s1.length())
	{
		std::cout << "s1 empty, try again\n";
		return 1;
	}
	if (!s2.length())
	{
		std::cout << "s2 empty, try again\n";
		return 1;
	}
	return 0;
}

void	replace(std::string file, std::string s1, std::string s2) {
	if (empty_string(s1, s2))
		exit(1);

	std::ifstream file_in;

	file_in.open(file);
	if (!file_in.is_open())
	{
		std::cout << "Error: " << file << " don't open\n";
		exit(1);
	}
	file += ".replace";

	std::ofstream file_out;

	file_out.open(file);
	if (!file_out.is_open())
	{
		std::cout << "Error: " << file << " don't open\n";
		exit(1);
	}

	std::string str;

	while (!file_in.eof())
	{
		getline(file_in, str);
		std::size_t find_pos;
		while (1)
		{
			find_pos = -1;
			find_pos = str.find(s1);
			if (find_pos >= 0 && find_pos <= str.length())
			{
				file_out << str.substr(0, find_pos) << s2;
				str.erase(0, find_pos + s1.length());
			}
			else
			{
				file_out << str;
				break;
			}
		}
		if (!file_in.eof())
			file_out << std::endl;
	}
	file_in.close();
	file_out.close();
}

int	main(int argc, char *argv[]) {
	if (argc != 4)
		std::cout << "Wrong input, use -> ./replace file s1 s2\n";
	else
		replace(argv[1], argv[2], argv[3]);
	return 0;
}
