#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal is created\n";
}

Animal::~Animal() {
    std::cout << "Animal is deleted\n";
}

Animal::Animal(std::string type): type(type) {
    std::cout << "Animal" << type << "is created\n";
}

Animal::Animal(Animal& other): type(other.type) {
    std::cout << "Animal" << type << "is copied\n";
}

const std::string Animal::getType() const {
    return type;
}

Animal& Animal::operator=(Animal& other) {
    type = other.type;
    return *this;
}