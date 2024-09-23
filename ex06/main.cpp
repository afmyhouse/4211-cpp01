#include "Harl.hpp"
#include <cstdlib>
#include <stdlib.h>

void prompt(void)
{
    std::cout << "Invalid command line! To use harlFilter EX05:" << std::endl;
    std::cout << "./harlFilter <level_string>" << std::endl;
	exit(1);
}
void harlFilter(Harl &harl, const std::string& level)
{	
	int index = 4;
	std::string levels[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	for (int i = 3; i > -1 ; i--)
		if (!levels[i].compare(level))
			index = i;
			
	if (index == 4)
	{
		std::cout << "I guess Harl is saying something, something." << std::endl;
		return ;
	}
	while (index <= 3 && index >= 0)
	{
		switch(index)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				harl.complain("DEBUG");
				break ;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				harl.complain("INFO");
				break ;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				break ;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				break ;
			default:
				std::cout << "I guess Harl is saying something, something." << std::endl;
				break ;
		}
		index++;
	}
	return ;
}

int main(int argc, char **argv)
{
	Harl harl;
	
	if (argc < 2)
		prompt();
	harlFilter(harl, argv[1]);
	return (0);
}