#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string const _name;
		Weapon &_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		void attack(void);
		void setWeapon(const Weapon& weapon);
		~HumanA(void);

};

#endif
