#include "HumanB.hpp"

HumanB::~HumanB()
{}

HumanB::HumanB(std::string str)
{
    name = str;
}

void    HumanB::attack()
{
    std::cout << "sono quaa" << std::endl;
    if (weapon)
	    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
    else
	    std::cout << this->name << " has no weapon to att<ck with " << std::endl;
}

void HumanB::setWeapon(Weapon& army)
{
    weapon = &army;
}