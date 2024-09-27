#include "Zombie.hpp"

void randomChump(std::string name)
{
	//direct object STACK
	Zombie aZombie(name);
	aZombie.announce();
}