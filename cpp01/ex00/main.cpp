#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	Zombie *z1 = newZombie("Zomb_heap1");
	Zombie *z2 = newZombie("Zomb_heap2");
	Zombie *z3 = newZombie("Zomb_heap3");

	randomChump("Chump_stack1");
	randomChump("Chump_stack2");
	randomChump("Chump_stack3");

	delete z1;
	delete z2;
	delete z3;
}
