#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

int PhoneBook::Empty(Contact cont) {
	int	out = 0;

	out += cont.getFirstName().length();
	out += cont.getLastName().length();
	out += cont.getNickname().length();
	out += cont.getPhone().length();
	out += cont.getSecret().length();

	return out;
}

void PhoneBook::Add() {

	static int	i = 0;
	int	empty = 0;
	std::string	line;

	std::cout << "Input first name" << std::endl;
	std::getline(std::cin, line);
	Contacts[i].setFirstName(line);

	std::cout << "Input last name" << std::endl;
	std::getline(std::cin, line);
	Contacts[i].setLastName(line);

	std::cout << "Input nickname" << std::endl;
	std::getline(std::cin, line);
	Contacts[i].setNickname(line);

	std::cout << "Input phone number" << std::endl;
	std::getline(std::cin, line);
	Contacts[i].setPhone(line);

	std::cout << "Input darkest secret" << std::endl;
	std::getline(std::cin, line);
	Contacts[i].setSecret(line);

	empty = PhoneBook::Empty(Contacts[i]);

	if (empty)
		i++;
	i = i % 8;
}

void PhoneBook::Search() {
	int	book_size = 0;
	int	i = 0;
	int	idx;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	while (i < 8)
	{
		std::string line = Contacts[i].getFirstName();
		if (!PhoneBook::Empty(Contacts[i]))
			break;
		std::cout << "|" << std::setw(10) << i + 1;

		std::string cut_first_name = Contacts[i].getFirstName();
		if (cut_first_name.length() > 10)
			cut_first_name = cut_first_name.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << cut_first_name;

		std::string cut_last_name = Contacts[i].getLastName();
		if (cut_last_name.length() > 10)
			cut_last_name = cut_last_name.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << cut_last_name;

		std::string cut_nickname = Contacts[i].getNickname();
		if (cut_nickname.length() > 10)
			cut_nickname = cut_nickname.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << cut_nickname << "|";
		std::cout << std::endl;

		book_size++;
		i++;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl << std::endl;
	std::cout << "Input search index: ";
	if (!(std::cin >> idx) || idx < 1 || idx > book_size)
	{
		std::cin.clear();
		std::cout << "Wrong index" << std::endl;
	}
	else
	{
		idx--;
		std::cout << "first name: " << Contacts[idx].getFirstName() << std::endl;
		std::cout << "last name: " << Contacts[idx].getLastName() << std::endl;
		std::cout << "nickname: " << Contacts[idx].getNickname() << std::endl;
		std::cout << "phone number: " << Contacts[idx].getPhone() << std::endl;
		std::cout << "darkest secret: " << Contacts[idx].getSecret() << std::endl;
		std::cout << std::endl;
	}
	std::cin.ignore();
}
