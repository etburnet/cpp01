/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:24:00 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/13 16:05:25 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	Zombie *zombie_horde = zombieHorde(5, "ethan");
	for (size_t i = 0; i < 5; i++)
	{
		zombie_horde[i].announce();
	}
	delete[](zombie_horde);
	return(0);
}