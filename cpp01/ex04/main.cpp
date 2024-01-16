#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <fstream>

void    Sed(std::string filename, std::string s1, std::string s2, char *av)
{
    std::ofstream outfile;
    std::string   line;
    std::ifstream file(av);
    outfile.open(filename.c_str());
    while (getline(file, line))
    {
        size_t i = 0;
        while (1)
	    {
            i = line.find(s1, i);
            if (i != std::string::npos)
		    {
		    	line.erase(i, s1.length());
		    	line.insert(i, s2);
		    	i += s2.length();
		    }
		    else
                break ;
	    }
        outfile << line << std::endl;
    }
}

int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    if (ac == 4)
    {
        if (av[1][0] == '\0') {
            std::cout << "Error : no file in argument" << std::endl;
            return (2);
        }
        if (av[2][0] == '\0') {
            std::cout << "Error : no occurence to find in argument" << std::endl;
            return (2);
        }
        filename = std::string(av[1]) + ".replace";
        s1 = av[2];
        s2 = av[3];
        Sed(filename, s1, s2, av[1]);
    }
    else
        std::cout << "Wrong number of paramater" << std::endl;
}
