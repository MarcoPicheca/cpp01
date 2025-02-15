/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:42:28 by marco             #+#    #+#             */
/*   Updated: 2025/02/15 19:02:52 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main()
{
	Zombie *zombie;
	std::string name;

	std::cout << "Zombie name: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	zombie = newZombie(name);
	zombie->announce();
	zombie->~Zombie();
	randomChump("Cala");
	return 0;
}