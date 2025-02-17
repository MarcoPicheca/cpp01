#include "Zombie.hpp"

int main()
{
	int N;
	std::string	tmp;
	std::cout << "Insert number of zombies (use just numerical characters '123567890'): " << std::endl;
	std::cin >> tmp;
	const char *str = tmp.c_str();
	N = std::atoi(str);

	Zombie *horde = zombieHorde(N, "Frank");
	delete [] horde;
}
