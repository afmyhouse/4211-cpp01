#include "Zombie.hpp"

void prompt(void)
{
    std::cout << "Invalid command line! To use zombie EX00:" << std::endl;
    std::cout << "./zombie <zombie1_name> <zombie2_name>" << std::endl;
	return ;
}

int main(int argc, char **argv, char **env) {
	(void)env;
	if (argc != 3)
	{
		prompt();
		return 0;
	}
	if (argc == 3)
	{
		// pointer to object: HEAP MEMMORY
		Zombie *pZombie = newZombie((std::string)argv[1]);
		pZombie->announce();
		delete pZombie;
		
		// function to create object : STACK MEMMORY
		randomChump((std::string)argv[2]);
	}
}