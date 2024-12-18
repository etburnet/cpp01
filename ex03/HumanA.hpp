/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:52 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 15:11:17 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Weapon.hpp"
#endif

class HumanA
{
	private:
		std::string _name;
		Weapon &_Weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
};