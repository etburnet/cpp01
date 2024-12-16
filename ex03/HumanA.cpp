/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:54 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/14 11:58:16 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->_Weapon = weapon;
	return ;
}

HumanA::HumanA()
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
