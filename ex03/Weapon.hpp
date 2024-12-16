/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 10:23:40 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/16 14:25:23 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string weapon_type);
		Weapon();
		~Weapon();
		const std::string &getType();
		void setType(std::string type);
};

