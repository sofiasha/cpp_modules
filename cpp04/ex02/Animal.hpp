#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
    public:
        Animal();
        Animal(std::string);
        Animal(Animal&);
        virtual ~Animal();

        const std::string getType() const;
        virtual void makeSound() const = 0;
        Animal& operator=(Animal&);

    protected:
        std::string type;
};
#endif