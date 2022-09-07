#include "Convert.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Error: wrong input, use: ./convert <arg>" << std::endl;
	} else {
		Convert conv(argv[1]);
		conv.printTypes();
	}
	return 0;
}

// int main(int argc, char *argv[]) {
// 	std::string line;

// 	if (argc != 2)
// 		std::cout << "Error: wrong numbers of arguments | use: ./convert <arg1>\n";
// 	else {
// 		Convert someNum(argv[1]);
// 		someNum.printTypes();
// 		float f_value;
// 		int i_value;
// 		double d_value;
// 		//std::cout << argv[1] << std::endl;
// 		f_value = atof(argv[1]);
// 		i_value = atoi(argv[1]);
// 		d_value = static_cast<double>(atof(argv[1]));
// 		std::cout << "int: " << i_value << std::endl;
// 		std::cout << "float: " << f_value << std::endl;
// 		std::cout << "double: " << d_value << "\n";
// 		std::cout << argv[1] << std::endl;
// 		std::cout << "INT MIN = "<< std::numeric_limits<int>::min() << std::endl;
// 		std::cout << "INT MAX = "<< std::numeric_limits<int>::max() << std::endl;
// 		if (std::numeric_limits<int>::min() > d_value)
// 			std::cout << "low" << std::endl;
// 		if (std::numeric_limits<int>::max() < d_value)
// 			std::cout << "big" << std::endl;
// 		if (d_value - static_cast<double>(i_value) != 0)
// 			std::cout << "need round\n";
// 		std::cout << "abs = "<< std::abs(i_value) << std::endl;
// 		//if (f_value > std::numeric_limits<int>::max())
// 		//	std::cout << "Biggest MAX int\n";



// 		//line = argv[1];

// 		//if (line == "nan" || line == "nanf")

// 		//if (line.length() != 0) {
// 		//	for (size_t i = 0; line[i]; i++) {
// 		//		std::cout << line[i];
// 		//	}
// 		//} else
// 		//	std::cout << "ebobo\n";
// 		//std::cout << std::endl;
// 	}


// 	//std::cout << static_cast<float>(line) << std::endl;

// 	return 0;
// }
