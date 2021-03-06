#include "ScavTrap.hpp"
#include <iostream>

void	ScavTrap::initDefaultValues() {
	hitPoints = SCAV_HP;
	energyPoints = SCAV_EP;
	attackDamage = SCAV_DMG;
}

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	initDefaultValues();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	initDefaultValues();
}

ScavTrap::ScavTrap(ClapTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	initDefaultValues();
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	if (attackDamage > energyPoints)
		std::cout << "ScavTrap " << name
			<< " doesn't have enough energy points to attack." << std::endl;
	else {
		energyPoints -= attackDamage;
		std::cout << "Attention! " << "ScavTrap " << name << " attacks " << target << "!!!"
			<< " The attack caused " << attackDamage << " points of damage!" 
			<< " Energy points reduced to " << energyPoints << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap have entered the Gate keeper mode" << std::endl;
}

ScavTrap&	ScavTrap::operator =(ScavTrap& other) {
	if (this == &other)
		return *this;
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}
