#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Intern	intern;

	Form*	pp = intern.makeForm("Presidential Pardon", "Someone");
	Form*	rr = intern.makeForm("Robotomy request", "Burokratik");
	Form*	sc = intern.makeForm("Shrubbery creation", "Backyard");
	Form*	err = intern.makeForm("NoName", "error");
	(void) err;

	Bureaucrat	hleb("Hlebushek", 1);
	hleb.signForm(*pp);
	hleb.signForm(*rr);
	hleb.signForm(*sc);

	hleb.executeForm(*pp);
	hleb.executeForm(*rr);
	hleb.executeForm(*sc);

	delete pp;
	delete rr;
	delete sc;
}
