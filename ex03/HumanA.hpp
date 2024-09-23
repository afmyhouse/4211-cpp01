/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:51:30 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 09:43:14 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

  public:
      HumanA( void );
      HumanA( const std::string& typeName, Weapon &typeWeapon );
      ~HumanA( void );
      void attack( void );
      void setWeapon(const Weapon& weapon);
  
  private:
      std::string _name;
      Weapon &_weapon;
};

#endif
