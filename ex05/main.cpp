/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:23:46 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/17 15:23:33 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string level)
{
	
}

int	main()
{
	std::string input;
	Harl *harl;
	
	std::cout << "Choose between (DEBUG, INFO, WARNING, ERROR):" << std::endl;
	std::cin >> input;
	harl->complain(input);
}