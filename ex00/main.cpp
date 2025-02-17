/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:42:28 by marco             #+#    #+#             */
/*   Updated: 2025/02/17 15:46:38 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
	Zombie *zombie;
	std::string name;

	std::cout << "Zombie name: " << std::endl;
	std::getline(std::cin, name);
	zombie = newZombie(name);
	zombie->announce();
	zombie->~Zombie();
	delete zombie;
	randomChump("Cala");
	return 0;
}