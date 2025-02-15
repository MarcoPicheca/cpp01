/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:43:09 by marco             #+#    #+#             */
/*   Updated: 2025/02/14 18:08:08 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* newZombie(std::string name)
{
	Zombie *new_zombie = NULL;

	new_zombie = new Zombie(name);
}