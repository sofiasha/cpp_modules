#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
        WrongCat(std::string);
        WrongCat(WrongCat&);
        ~WrongCat();

        virtual void makeSound() const;

    protected:
        std::string type;
};
#endif