#include "libFile.hpp"

bool isFileEmpty(const char *filePath) {
    std::ifstream file(filePath);  // Apri il file in modalità binaria
    return file.peek() == EOF;  // Se il primo byte è EOF, il file è vuoto
}

int main(int ac, char *av[])
{
	if (ac != 4 )
	{
		std::cout << "Wrong argument count" << std::endl;
		return 1;
	}
	std::string av1 = av[1]; 
	std::string av2 = av[2]; 
	std::string av3 = av[3]; 
	if (av1.empty() ||  av2.empty() || av3.empty())
	{
		std::cout << "Necessary args:" << std::endl << "1 file, 1 string1, 1 string2" << std::endl;
		return (1);
	}
	std::string fileRep;
	std::string line;
	std::ifstream file(av[1]);
	if (isFileEmpty(av[1]))
	{
		std::cerr << "The file passed is empty" << std::endl;
		return 1;
	}
	if (!file)
	{
		std::cerr << "Necessary args:" << std::endl << "1 file, 1 string1, 1 string2" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		fileRep.append(line);
		line.clear();
		fileRep.append("\n");
	}
	int pos = -1;
	while ((pos = fileRep.find(av2)))
	{
		if (pos == -1)
			break ;
		fileRep.erase(pos, av2.length());
		fileRep.insert(pos, av3);
	}
	std::cout << fileRep;
	file.close();
	std::ofstream fileOut("input.txt");
	if (!fileOut)
	{
		std::cerr << "Problem ofstream input.txt" << std::endl;
		return (1);
	}
	fileOut << fileRep;
	std::cout << "\033[31m" << std::endl << "STRINGA CON ROBA MODIFICATA\n";
	std::cout << "\033[35m"  << fileRep << "\033[0m" << std::endl;
	fileRep.clear();
	fileOut.close();
	std::ifstream newFileIn("input.txt");
	if (!newFileIn)
	{
		std::cerr << "Problem ifstream input.txt" << std::endl;
		return (1);
	}
	while (std::getline(newFileIn, line))
	{
		fileRep.append(line);
		line.clear();
		fileRep.append("\n");
	}
	std::cout << "\033[31m" << std::endl << "STRINGA modificata riscritta in input.txt\n";
	std::cout << "\033[32m" << fileRep << "\033[0m";
	newFileIn.close();
	return (0);
}