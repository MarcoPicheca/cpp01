#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl cos;

    if (ac != 2)
    {
        std::cout << "wrong arg counting!" << std::endl;
        return 1;
    }
    std::string lev = av[1];
    cos.complain(lev);
    return (0);
}