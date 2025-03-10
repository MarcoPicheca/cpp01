/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:43:04 by marco             #+#    #+#             */
/*   Updated: 2025/02/17 15:45:57 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *zobieNew = newZombie(name);
	zobieNew->announce();
	delete zobieNew;
}
