#include "ClapTrap.hpp"
#include <iostream>
#include <limits>

ClapTrap::ClapTrap()
	: hitPoints(CLAP_HP),
	energyPoints(CLAP_EN_P),
	attackDamage(CLAP_DMG) {std::cout << "clapTrap default constructor called" << std::endl;}

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(CLAP_HP),
	energyPoints(CLAP_EN_P),
	attackDamage(CLAP_DMG) {std::cout << "clapTrap constructor called" << std::endl;}

ClapTrap::ClapTrap(ClapTrap& other)
	: name(other.name),
	hitPoints(other.hitPoints),
	energyPoints(other.energyPoints),
	attackDamage(other.attackDamage) {std::cout << "clapTrap copy constructor called" << std::endl;}

ClapTrap::~ClapTrap() {std::cout << "clapTrap destructor called" << std::endl;}

const std::string&	ClapTrap::getName() const {
	return name;
}

unsigned int	ClapTrap::getAttackDamage() const {
	if (energyPoints < attackDamage)
		return 0;
	return attackDamage;
}

void	ClapTrap::setAttackDamage(unsigned int amount) {
	attackDamage = amount;
}

void	ClapTrap::attack(std::string const & target) {
	if (attackDamage > energyPoints)
		std::cout << "Claptrap " << name
			<< " doesn't have enough energy points to attack." << std::endl;
	else {
		energyPoints -= attackDamage;
		std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage! " << name   
			<< " has " << energyPoints << " energy points after attack." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints > amount)
		hitPoints -= amount;
	else
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " gets "
		<< amount << " points of damage!" << " Now it has "
		<< hitPoints << " hitpoints."<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
		hitPoints = hitPoints + amount;
	std::cout << "ClapTrap " << name << " has been repaired for " << amount
		<< " hit points!" << " Now it has " << hitPoints << " hitpoints."
		<< std::endl;
}

ClapTrap&	ClapTrap::operator =(const ClapTrap& other) {
	if (this == &other)
		return *this;
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << ".!.\n";
	return *this;
}
