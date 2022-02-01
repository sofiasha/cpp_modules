#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main() {
	
	FragTrap	bat("Batman");
	FragTrap	jok("Joker");

	bat.attack(jok.getName());
	jok.takeDamage(bat.getAttackDamage());

	jok.setAttackDamage(2);
	jok.attack(bat.getName());
	bat.takeDamage(jok.getAttackDamage());
	bat.beRepaired(20);

	jok.setAttackDamage(9);
	jok.attack(bat.getName());
	bat.takeDamage(jok.getAttackDamage());
	bat.highFivesGuys();
}
