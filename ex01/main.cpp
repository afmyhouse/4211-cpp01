/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:02:01 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:44:33 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <cstdlib>
#include <iostream>

void	prompt(void)
{
	std::cout << "Invalid command line! To use Zombie EX01:" << std::endl;
	std::cout << "./zombie <hord_size> <hord_name>" << std::endl;
	std::cout << "hord_size is a number > 0" << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		prompt();
		
	int	zHordeSize;
	Zombie *zHorde;
	
	zHordeSize = atoi(argv[1]);

	zHorde = zombieHorde(zHordeSize, argv[2]);

	if (!zHorde)
		return (2);
	for (int i = 0; i < zHordeSize; i++)
		zHorde[i].announce();
	delete[] zHorde;
}
