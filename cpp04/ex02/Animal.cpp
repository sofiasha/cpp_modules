#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal default contructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal default contructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal copy contructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

const std::string&	Animal::getType() const {
	return type;
}

Animal&	Animal::operator =(Animal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}
