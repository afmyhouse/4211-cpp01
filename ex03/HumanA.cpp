/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:51:30 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:44:02 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA ( const std::string& name, Weapon& typeWeapon ) : _weapon(typeWeapon) {
    this->_name = name;
}

HumanA :: ~HumanA( void ) {
    
}
void HumanA :: attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(const Weapon& weapon) {
    this->_weapon = weapon;
}