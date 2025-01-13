/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:23:46 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/13 13:42:21 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string input)
{
	void (Harl::* ptrFctTab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i++)
	{
		if (input == levels[i])
			(this->*ptrFctTab[i])();
	}
}

int	main()
{
	std::string input;
	Harl harl;
	
	std::cout << "Choose between (DEBUG, INFO, WARNING, ERROR):" << std::endl;
	std::cin >> input;
	harl.complain(input);
}
