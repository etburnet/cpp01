/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:43 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 09:38:27 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "iostream"

Weapon::Weapon(std::string weap_type)
{
	this->_type = weap_type;
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
