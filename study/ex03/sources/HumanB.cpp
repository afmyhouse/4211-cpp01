#include "../includes/HumanB.hpp"

HumanB::HumanB()
{
	this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with their NULL weapon..." << std::endl;
	else
	{
		std::cout << this->name << " attacks with their ";
		std::cout << this->weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}