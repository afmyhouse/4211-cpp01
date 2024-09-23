/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:45:21 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 10:11:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie( void ) {
	
}

Zombie :: Zombie( std::string name ) {
	this->name =  name;
}

Zombie :: ~Zombie( void ) {
	std::cout << this->name << ": died!" << std::endl;
}

void Zombie :: setName( std::string name) {
	this->name = name;
}

void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
