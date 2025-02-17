#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde = NULL;

	if (N <= 0)
	{
		std::cout << "At least create one Zombie!" << std::endl;
		return (0);
	}
	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
	}
	return &(zombieHorde[0]);
}