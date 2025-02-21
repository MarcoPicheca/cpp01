#include <iostream>

// void printingg(std::string &stringREF,std::string *stringPTR,std::string str)
// {
//     std::cout << "string mem address: " << &str << std::endl;
//     std::cout << "stringPTR mem address: " << &stringPTR << std::endl;
//     std::cout << "stringREF mem address: " << &stringREF << std::endl;

//     std::cout << "string value pointed to: " << str << std::endl;
//     std::cout << "stringPTR value pointed to: " << *stringPTR << std::endl;
//     std::cout << "stringREF value pointed to: " << stringREF << std::endl;
// }

int main()
{
    std::string str = "HI THIS IS BRAIN" ;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // printingg(str, &str, str);
    std::cout << "string mem address: " << &str << std::endl;
    std::cout << "stringPTR mem address: " << &stringPTR << std::endl;
    std::cout << "stringREF mem address: " << &stringREF << std::endl;

    std::cout << "string value pointed to: " << str << std::endl;
    std::cout << "stringPTR value pointed to: " << *stringPTR << std::endl;
    std::cout << "stringREF value pointed to: " << stringREF << std::endl;
    return 0;
}