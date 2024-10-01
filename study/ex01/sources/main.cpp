#include "../includes/Zombie.hpp"
#include <cstdlib>

void prompt(void)
{
    std::cout << "Invalid command line! To use zombie EX00:" << std::endl;
    std::cout << "./zombie <zombie1_name> <zombie2_name>" << std::endl;
	return ;
}

int main(int argc, char **argv, char **env) {
	(void)env;
	if (argc == 3)
	{
		int sizeHorde;
		Zombie *zHorde;
		sizeHorde = atoi(argv[1]);
		if (sizeHorde > 0) {
			zHorde = zombieHorde(sizeHorde, "zbHorde");
			if (!zHorde)
				return (2);
			// for (int i = 0; i < sizeHorde; i++)
			// 	zHorde[i].announce();
			delete[] zHorde;
		}
		else
		{
			std::cout << "Invalid command line! To use zombie EX01:" << std::endl;
			std::cout << "./zombie <number_of_zombies> <horde name>"<< std::endl;
		}
	}
	else
	{
		prompt();
		return 0;
	}
}