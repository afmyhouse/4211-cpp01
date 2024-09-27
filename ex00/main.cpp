/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:02:01 by antoda-s          #+#    #+#             */
/*   Updated: 2024/09/27 10:41:35 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void prompt(void)
{
    std::cout << "Invalid command line! To use zombie EX00:" << std::endl;
    std::cout << "./zombie <zombie1_name> <zombie2_name>" << std::endl;
	return ;
}

Zombie* newZombie( std::string name ) {
	//pointer to object
	Zombie* pZombie = new Zombie(name);
	return (pZombie);
}

void randomChump( std::string name)
{
	//direct object
	Zombie aZombie(name);
	aZombie.announce();
}

int	main(int argc, char **argv, char **env)
{
	(void)env;
	if (argc != 3)
	{
		prompt();
		return 0;
	}
	if (argc == 3)
	{
		// pointer to object
		Zombie *pZombie = newZombie((std::string)argv[1]);
		pZombie->announce();
		//function to create object
		randomChump((std::string)argv[2]);
		delete pZombie;
	}
}