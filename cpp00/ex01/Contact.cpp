#include "Contact.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void Contact::setFirstName(std::string str) {
	this->first_name = str;
}

void Contact::setLastName(std::string str) {
	this->last_name = str;
}

void Contact::setNickname(std::string str) {
	this->nickname = str;
}

void Contact::setPhone(std::string str) {
	this->phone_number = str;
}

void Contact::setSecret(std::string str) {
	this->darkest_secret = str;
}

std::string Contact::getFirstName(void) {
	return this->first_name;
}

std::string Contact::getLastName(void) {
	return this->last_name;
}

std::string Contact::getNickname(void) {
	return this->nickname;
}

std::string Contact::getPhone(void) {
	return this->phone_number;
}

std::string Contact::getSecret(void) {
	return this->darkest_secret;
}
