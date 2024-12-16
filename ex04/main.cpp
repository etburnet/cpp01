/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:23:22 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 15:32:23 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char* argv[])
{
	std::fstream fs;

	if(argc != 3)
		return (std::cout << "3 params needed" << std::endl, 1);
	fs.open(argv[1]);
}