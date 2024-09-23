/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:21:47 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:44:12 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		Weapon  spear = Weapon("crude pointy spear");
		HumanA boba("Boba", club);
		HumanA bobb("Bobb", spear);
		boba.attack();
		bobb.attack();
		club.setType("some other type of club");
		boba.attack();
		bobb.attack();
		club.setType("some other type of spear");
		boba.setWeapon(spear);
		boba.attack();
		bobb.attack();
        std::cout<<"the club  weapon::_type = " << club.getType()<<std::endl;
        std::cout<<"the spear weapon::_type = " << spear.getType()<<std::endl;
	}
        std::cout<<"************************************************\n";
	{
		Weapon	club = Weapon("crude spiked club");
		Weapon	spear = Weapon("crude pointy spear");
		
		HumanB jima("JimB");
		jima.attack();
		jima.setWeapon(club);
		jima.attack();
		jima.setWeapon(spear);
		jima.attack();
        std::cout<<"\n";
		club.setType("some other type of club");
		jima.attack();
        jima.setWeapon(club);
		jima.attack();
        std::cout<<"the club  weapon::_type = " << club.getType()<<std::endl;
        std::cout<<"the spear weapon::_type = " << spear.getType()<<std::endl;
	}
        std::cout<<"************************************************\n";
    {
		Weapon	club = Weapon("crude spiked club");
		Weapon	spear = Weapon("crude pointy spear");
		
		HumanA joe("JoeA", club);
		joe.attack();
		joe.setWeapon(club);
		joe.attack();
		joe.setWeapon(spear);
		joe.attack();
        std::cout<<"\n";
		club.setType("some other type of club");
		joe.attack();
        joe.setWeapon(club);
		joe.attack();
        std::cout<<"the club  weapon::_type = " << club.getType()<<std::endl;
        std::cout<<"the spear weapon::_type = " << spear.getType()<<std::endl;
	}
        // std::cout<<"\n";
        // boba.attack();
        // bobb.attack();
	return (0);
}
