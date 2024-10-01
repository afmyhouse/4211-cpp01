#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
		std::string type;
	public:
		// Default constructor
		Zombie( void );
		Zombie(std::string name);
		~Zombie();

		void announce();

		void setName(std::string name);
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

Zombie* zombieHorde( int N, std::string name );

#endif