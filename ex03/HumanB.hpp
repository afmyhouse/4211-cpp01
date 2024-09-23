/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:51:30 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:43:11 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(void);
        HumanB(const std::string name);
        ~HumanB( void );
        void attack(void);
        void setWeapon(Weapon& weapon);

    private:
        std::string _name;
        Weapon* _weapon;
};

#endif
