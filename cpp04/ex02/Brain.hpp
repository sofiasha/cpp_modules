#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain {
    public:
        Brain();
        Brain(Brain&);
        ~Brain();

        Brain& operator=(Brain&);
    private:
        std::string ideas[100];
};
#endif