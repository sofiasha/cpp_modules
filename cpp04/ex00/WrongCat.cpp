#include "WrongCat.hpp"

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
    std::cout << "WrongCat: Bzzz\n";
}
