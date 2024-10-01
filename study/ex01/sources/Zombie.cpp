
#include "../includes/Zombie.hpp"

Zombie::Zombie(void) {
	this->name = "default";
}

Zombie :: Zombie(std::string name) {
	this->name = name;
}

Zombie :: ~Zombie() {
	std::cout << this->name << " destroyed!" << std::endl;
}

void Zombie :: announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
