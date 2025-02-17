#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::setName(std::string nameInput)
{
	name = nameInput;
}

void	Zombie::announce()
{
	std::cout << name << ' ' << "Brainzzz" << std::endl;
}

Zombie::~Zombie()
{
}
