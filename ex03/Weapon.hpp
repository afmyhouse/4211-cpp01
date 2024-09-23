/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:50:47 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:43:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

    public:
        Weapon( void );
        explicit Weapon(const std::string &typeName);
        ~Weapon( void );
        
        std::string getType();
        void setType(const std::string &typeName);
    private:
        std::string type;
};


#endif
