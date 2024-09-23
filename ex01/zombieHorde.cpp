/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 08:43:40 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/23 08:43:41 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	if (N < 0)
		return (NULL);
	Zombie *horde = new Zombie[N];
	
	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
