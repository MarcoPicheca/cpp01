#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "DEBUG PORCO PIO" << std::endl;
}

void Harl::info()
{
	std::cout << "INFO DIO MEDE" << std::endl;
}

void Harl::warning()
{
	std::cout << "WARNING DIAHANE" << std::endl;
}

void Harl::error()
{
	std::cout << "ERROR, SBAGLIATO, NON CORRETTO, COME CAZZO LO VUOI" << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	void	(Harl::*funcptr[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int levelInt = -1;
	if (level.empty())
		return ;
	if (level == "DEBUG") levelInt = 0;
	else if (level == "INFO") levelInt = 1;
	else if (level == "WARNING") levelInt = 2;
	else if (level == "ERROR") levelInt = 3;
	else if (levelInt == -1)
	{
		std::cout << "Wrong word" << std::endl;
		return ;
	}
	(this->*funcptr[levelInt])();
}
