/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:10:13 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/13 16:11:31 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie_horde = new Zombie[N];
	std::string	temp;

	for (size_t i = 0; i < N; i++)
	{
		std::stringstream sstm;
		sstm << name << i;
		temp = sstm.str();
		zombie_horde[i].setName(temp);
	}
	return (zombie_horde);
}