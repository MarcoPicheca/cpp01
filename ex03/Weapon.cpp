#include "Weapon.hpp"

const std::string    Weapon::getType()
{
    return type;
}

void    Weapon::setType(std::string str)
{
    type.clear();
    type = str;
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string str)
{
    if (str.empty())
        type = "No weapon type found";
    else
        type = str;
}