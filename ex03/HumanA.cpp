/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:54 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 15:14:45 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon){}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
	return ;
}
