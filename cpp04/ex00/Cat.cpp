#include "Cat.hpp"

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
    std::cout << "Cat: Mew\n";
}
