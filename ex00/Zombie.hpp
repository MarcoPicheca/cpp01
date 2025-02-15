/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:42:52 by marco             #+#    #+#             */
/*   Updated: 2025/02/14 18:04:10 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(std::string &name_input);
		~Zombie();
};

void randomChump(std::string name);

Zombie *newZombie(std::string name);

#endif