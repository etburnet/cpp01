/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:47 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 15:20:20 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Weapon.hpp"
#endif


class HumanB
{
	private:
		std::string _name;
		Weapon *_Weapon;
	public:
		HumanB(std::string name);
		HumanB();
		~HumanB();
		void attack(void);
		void setWeapon(Weapon &Weapon);
};