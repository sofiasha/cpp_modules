#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(std::string);
        WrongAnimal(WrongAnimal&);
        virtual ~WrongAnimal();

        const std::string getType() const;
        /*virtual*/ void makeSound() const;
        WrongAnimal& operator=(WrongAnimal&);

    protected:
        std::string type;
};
#endif