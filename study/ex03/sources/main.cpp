#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	{
		std::string type = "type 1.1";
		Weapon w1 = Weapon(type);
		Weapon w2 = Weapon("type 2.1");
		HumanA A1("A1", w1);
		HumanA A2("A2", w2);
		A1.attack();
		A2.attack();
		w1.setType("type 1.2");
		A1.attack();
		A2.attack();
		A1.setWeapon(w2);
		A1.attack();
		A2.attack();
	}
	{
		std::string type = "type 1.1";
		Weapon w1 = Weapon(type);
		Weapon w2 = Weapon("type 2.1");
		HumanB B1("B1");
		HumanB B2("B2");
		B1.setWeapon(w1);
		B2.setWeapon(w2);
		B1.attack();
		B2.attack();
		w1.setType("type 1.2");
		B1.attack();
		B2.attack();
		B1.setWeapon(w2);
		B1.attack();
		B2.attack();
	}
}