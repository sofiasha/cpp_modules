#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal is created\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal is deleted\n";
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
    std::cout << "WrongAnimal" << type << "is created\n";
}

WrongAnimal::WrongAnimal(WrongAnimal& other): type(other.type) {
    std::cout << "WrongAnimal" << type << "is copied\n";
}

const std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal: ****!\n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& other) {
    type = other.type;
    return *this;
}