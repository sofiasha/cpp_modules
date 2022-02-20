#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain is created\n";
}

Brain::Brain(Brain& other) {
    for (int i = 0; i < 100; i++)
        (this->ideas)[i] = other.ideas[i];
    std::cout << "Brain is copied\n";
}

Brain::~Brain() {
    std::cout << "Brain is deleted\n";
}

Brain& Brain::operator=(Brain& other) {
	std::cout << "Brain assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    return *this;
}