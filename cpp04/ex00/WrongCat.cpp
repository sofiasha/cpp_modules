#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat is created\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat is deleted\n";
}

WrongCat::WrongCat(std::string type): WrongAnimal(type) {
    std::cout << "WrongCat is created\n";
}

WrongCat::WrongCat(WrongCat& other): WrongAnimal(other.type) {
    std::cout << "WrongCat is copied\n";
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat quacks\n";
}

WrongCat&	WrongCat::operator =(WrongCat& other) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}
