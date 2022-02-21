#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	Bureaucrat	sof("Sofya", 1);
	std::cout << sof << std::endl;
	try {
		sof.upgrade();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	sof.downgrade();
	sof.downgrade();
	sof.downgrade();
	sof.downgrade();
	std::cout << sof << std::endl;

	try {
		Bureaucrat tooHigh("High", 0);
		std::cout << tooHigh << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	ali("Aliya", 151);
		std::cout << ali << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	ali("Aliya", 150);
	std::cout << ali << std::endl;
	try {
		ali.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ali.downgrade();
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHigh: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLow: " << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
}
