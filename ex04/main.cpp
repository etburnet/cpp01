/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:23:22 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/17 14:13:11 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring>

int	search_replace(std::string *str, std::string search, std::string replace)
{
	std::size_t found;
	std::size_t i = 0;
	std::size_t len_search = search.length();

	if (search.empty() || search.empty())
		return (1);
	while (i < (*str).length())
	{
		found = (*str).find(search, i);
		if (found != std::string::npos)
		{
			(*str).erase(found, len_search);
			(*str).insert(found, replace);
		}
		else
			break ;
		i = found + len_search;
	}
	return (0);
}

int	main(int argc, char* argv[])
{	
	int ret = 0;
	char name_dst[70000];
	
	if(argc != 4)
		return (std::cout << "3 params needed" << std::endl, 1);
	std::ifstream src(argv[1]);
	name_dst[0] = '\0';
	strcat(name_dst, argv[1]);
	strcat(name_dst, ".replace");
	std::ofstream dst(name_dst);
	std::string str((std::istreambuf_iterator<char>(src)), std::istreambuf_iterator<char>());
	ret = search_replace(&str, argv[2], argv[3]);
	dst << str;
	src.close();
	dst.close();
	return (ret);
}
