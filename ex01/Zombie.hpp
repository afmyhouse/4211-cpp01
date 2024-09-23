/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:48:58 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/22 18:26:50 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	Zombie( void );
	Zombie( std::string name);
	~Zombie();
	void setName( std::string name);
	void announce( void );
private:
	std::string name;
};

Zombie *newZombie( std::string name );

void randomChump( std::string name );

Zombie *zombieHorde( int N, std::string name );

#endif