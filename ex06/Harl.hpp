/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:10:34 by ncarvalh          #+#    #+#             */
/*   Updated: 2024/04/24 09:40:11 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		//! Constructor & Destructor
		Harl(void);
		~Harl(void);

		void complain (std::string level);
		
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif