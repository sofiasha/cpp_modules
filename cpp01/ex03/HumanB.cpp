#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = 0;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack() {
	std::string	weap;

	if (this->_weapon)
		weap = _weapon->getType();
	else
		weap = "hands";
	std::cout << _name << " is attacking with a " << weap << std::endl;
}
