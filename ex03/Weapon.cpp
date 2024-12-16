/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:43 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 14:58:39 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "iostream"

Weapon::Weapon(std::string weapon_type)
{
	setType(weapon_type);
	return ;
}

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string &Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
