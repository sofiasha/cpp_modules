#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog [default] is created\n";
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog is deleted\n";
}

Dog::Dog(const Dog& other): Animal(other.type) {
    brain = new Brain(*other.brain);
    std::cout << "Dog is copied.\n";
}

void Dog::makeSound() const {
    std::cout << "Dog barks\n";
}

const Brain* Dog::getBrain() const {
    return brain;
}

Dog& Dog::operator =(Dog& other) {
	    std::cout << "Dog =assignment is called\n";
	if (this == &other)
		return *this;
    delete brain;
	type = other.type;
    brain = new Brain(*other.brain);
	return *this;
}