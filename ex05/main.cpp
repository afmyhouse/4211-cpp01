#include "Harl.hpp"
# include <cstdlib>

void prompt(void)
{
    std::cout << "Invalid command line! To use harl EX05:" << std::endl;
    std::cout << "./harl <level_string>" << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	Harl harl;
	std::string level;
	
	if (argc < 2)
		prompt();
	level = argv[1];
	harl.complain(level);
	return (0);
}