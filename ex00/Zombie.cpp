/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <mapichec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:43:01 by marco             #+#    #+#             */
/*   Updated: 2025/02/17 15:44:04 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

/**
 * 
 * qui definiamo il modulo fuori dall'hpp del programma
 * e dalla classe stessa. Questo ci permette di avere un codice
 * piu' pulito e leggibile.
 * 	
*/
void Zombie::announce ()
{
   std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

/**
 * 
 * qui invece stiamo definendo il comportamento del costruttore il quale 
 * e' una funzione speciale che viene chiamata al momento della
 * dichiarazione di un oggetto 
 *  
 */

Zombie::Zombie(std::string input_name)
{
	name = input_name;
}

/**
 * 
 * qui stiamo definendo il comportamento del distruttore il quale 
 * e' una funzione speciale che serve a distruggere la memoria 
 * occupata dall'oggetto della classe di appartenenza
 * 
 */

Zombie::~Zombie()
{
}