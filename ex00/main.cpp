/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:24:40 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/13 14:52:17 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie_heap;
	std::string name_1 = "bob";
	std::string name_2 = "steve";
	randomChump(name_1);
	zombie_heap = newZombie(name_2);
	zombie_heap->announce();
	delete(zombie_heap);
	return (0);
}