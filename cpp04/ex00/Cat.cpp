#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat is created\n";
}

Cat::~Cat() {
    std::cout << "Cat is deleted\n";
}

Cat::Cat(Cat& other): Animal(other.type) {
    std::cout << "Cat is copied\n";
}

void Cat::makeSound() const {
    std::cout << "Cat meows\n";
}

Cat&	Cat::operator =(Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}
