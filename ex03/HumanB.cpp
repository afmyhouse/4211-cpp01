/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:51:30 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:44:08 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
    this->_weapon = NULL;
}

HumanB::HumanB( std::string name) {
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB( void ) {
    
}

void HumanB :: attack( void ) {
    if (!this->_weapon)
        std::cout << this->_name << " attacks with their bare hands" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

