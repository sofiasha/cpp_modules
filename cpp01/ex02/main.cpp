#include "iostream"

int	main(void) {
	std::string		s = "HI THIS IS BRAIN";
	std::string*	stringPTR;
	std::string&	stringREF = s;

	stringPTR = &s;
	std::cout << &s << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << s << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << std::endl;
}