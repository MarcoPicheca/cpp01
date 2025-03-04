#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[DEBUG]\n" << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]\n" << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
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
	switch (levelInt)
	{
		case 0:
			while (levelInt < 4)
				(this->*funcptr[levelInt++])();
			break;
		case 1:
			while (levelInt < 4)
				(this->*funcptr[levelInt++])();
			break;
		case 2:
			while (levelInt < 4)
				(this->*funcptr[levelInt++])();
			break;
		case 3:
			while (levelInt < 4)
				(this->*funcptr[levelInt++])();
			break;
		default:
			std::cout << "complaining too much Harl" << std::endl;
			break;
	}
}
