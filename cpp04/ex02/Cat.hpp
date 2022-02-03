#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
    public:
        Cat();
        Cat(const Cat&);
        ~Cat();

        virtual void makeSound() const;
        const Brain* getBrain() const;
        Cat& operator =(Cat& other);

    private:
        Brain* brain;
};
#endif