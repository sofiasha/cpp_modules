#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat();
        Cat(Cat&);
        ~Cat();

        virtual void makeSound() const;
		Cat&	operator =(Cat&);
};
#endif