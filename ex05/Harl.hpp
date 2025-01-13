/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:16:54 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/13 13:07:37 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string input);
		Harl();
		~Harl();
};