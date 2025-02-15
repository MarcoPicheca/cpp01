/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:43:01 by marco             #+#    #+#             */
/*   Updated: 2025/02/15 19:03:34 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void Zombie::announce ()
{
   std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string input_name)
{
	name = input_name;
}

Zombie::~Zombie()
{
}