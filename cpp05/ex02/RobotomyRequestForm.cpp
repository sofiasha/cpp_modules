#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
:	Form(), target("no target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
:	Form(RRF_NAME, RRF_SIGN, RRF_EXEC), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rform)
:	Form(RRF_NAME, RRF_SIGN, RRF_EXEC), target(rform.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::exec() const {
	std::cout << "Robotomizing, drilling... ";

	std::srand(std::time(NULL));
	int	number = std::rand() % 2;
	if (number)
		std::cout << target << " has been robotomized!\n"; 
	else
		std::cout << "Robotomize status: failed :( Target was " << target << " \n"; 
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(
const RobotomyRequestForm& other) {
	if (this == &other)
		return *this;
	Form::operator=(other);
	target = other.target;
	return *this;
}
