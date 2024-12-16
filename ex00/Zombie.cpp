/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:30:22 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/13 14:48:59 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << _name << " created" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " deleted" << std::endl;
	return ;
}