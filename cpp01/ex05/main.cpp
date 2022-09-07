#include "Harl.hpp"

int main(void) {

	Harl msg;

	msg.choise("DEBUG");
	msg.choise("INFO");
	msg.choise("WARNING");
	msg.choise("ERROR");
	msg.choise("DEBUG");
	msg.choise("ERROR");
	return 0;
}
