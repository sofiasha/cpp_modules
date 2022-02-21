#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main() {
	std::cout << "\n--- PRESIDENTIAL PARDON FORM ---\n\n";
	PresidentialPardonForm	pardonForm("kolbasa");
	Bureaucrat				hleb("Hlebushek", 26);
	Bureaucrat				bulka("Bulochka", 5);

	hleb.executeForm(pardonForm);
	bulka.executeForm(pardonForm);
	hleb.signForm(pardonForm);
	bulka.signForm(pardonForm);
	bulka.executeForm(pardonForm);

	std::cout << "\n--- ROBOTOMY REQUEST FORM ---\n\n";
	RobotomyRequestForm		req_rob("Burokratik");

	hleb.executeForm(req_rob);
	bulka.executeForm(req_rob);
	hleb.signForm(req_rob);
	bulka.signForm(req_rob);
	bulka.executeForm(req_rob);

	std::cout << "\n--- SHRUBBERY CREATION FORM ---\n\n";
	ShrubberyCreationForm		shrubbery("Backyard");

	hleb.executeForm(shrubbery);
	bulka.executeForm(shrubbery);
	hleb.signForm(shrubbery);
	bulka.signForm(shrubbery);
	bulka.executeForm(shrubbery);
	
}
