#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal is created\n";
}

Animal::~Animal() {
    std::cout << "Animal is deleted\n";
}

Animal::Animal(std::string type): type(type) {
    std::cout << "Animal " << type << " is created.\n";
}

Animal::Animal(Animal& other): type(other.type) {
    std::cout << "Animal " << type << " is copied\n";
}

const std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal tries to make sound\n";
}

Animal& Animal::operator=(Animal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this == &other)
		return *this;
    type = other.type;
    return *this;
}