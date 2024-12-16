/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:52 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/14 11:56:37 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "Weapon.hpp"
#endif

class HumanA
{
	private:
		Weapon _Weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon weapon);
		HumanA();
		~HumanA();
		void attack(void);
};