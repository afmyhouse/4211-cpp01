/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:51:03 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 10:14:19 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void) {
    
}

Weapon::Weapon(const std::string &typeName) {
    type = typeName;
}

Weapon::~Weapon() {
    
}

std::string Weapon::getType() {
    return type;
}

void Weapon::setType(const std::string &typeName) {
    type = typeName;
}