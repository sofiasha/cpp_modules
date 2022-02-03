#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
    public:
        Dog();
        Dog(const Dog&);
        ~Dog();

        virtual void makeSound() const;
        const Brain* getBrain() const;
        Dog& operator =(Dog& other);

    private:
        Brain* brain;
};
#endif