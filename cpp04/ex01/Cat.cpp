#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat [default] is created\n";
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat is deleted\n";
}

Cat::Cat(const Cat& other): Animal(other.type) {
    brain = new Brain(*other.brain);
    std::cout << "Cat is copied.\n";
}

void Cat::makeSound() const {
    std::cout << "Cat meows\n";
}

const Brain* Cat::getBrain() const {
    return brain;
}

Cat& Cat::operator =(Cat& other) {
	if (this == &other)
		return *this;
    delete brain;
	type = other.type;
    brain = new Brain(*other.brain);
	return *this;
	std::cout << "Cat =assignment is called\n";
}