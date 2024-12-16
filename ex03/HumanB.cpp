/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:50 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 10:14:18 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::HumanB()
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_Weapon = &weapon;
}