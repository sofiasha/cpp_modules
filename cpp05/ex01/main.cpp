#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
	try {
		Form	x("X", 0, 1);
		std::cout << x << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form	x("X", 200, 1);
		std::cout << x << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	{
		Form		y("Y", 15, 10);
		Bureaucrat	h("Hlebushek", 10);

		std::cout << y << std::endl;
		h.signForm(y);
		std::cout << y << std::endl;
	}
	{
		Form		x("X", 1, 10);
		Bureaucrat	h("Hlebushek", 10);

		std::cout << x << std::endl;
		h.signForm(x);
		std::cout << x << std::endl;
	}
	{
		Form		x("X", 1, 10);
		Bureaucrat	h("Hlebushek", 10);

		std::cout << x << std::endl;
		h.signForm(x);
	}
}
