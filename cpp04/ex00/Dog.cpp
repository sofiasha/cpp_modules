#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog is created\n";
}

Dog::~Dog() {
    std::cout << "Dog is deleted\n";
}

Dog::Dog(Dog& other): Animal(other.type) {
    std::cout << "Dog is copied\n";
}

void Dog::makeSound() const {
    std::cout << "Dog: Woof\n";
}
