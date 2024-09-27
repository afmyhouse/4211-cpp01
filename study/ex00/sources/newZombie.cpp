#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	//pointer to object HEAP
	Zombie* pZombie = new Zombie(name);
	return (pZombie);
}
