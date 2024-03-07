#include "BitcoinExchange.hpp"

int main (int ac, char **argv) {

	if (ac != 2 || argv[1][0] == '\0') {
		std::cout << "No file in input" << std::endl;
		return 0;
	}
	else {
		std::map<std::string, float> map;
		std::ifstream file(argv[1]);
		std::string line;
		while (getline(file, line))
		{
			size_t i = 0;
			i = line.find("|", i);
			if (i != std::string::npos) {
				std::stringstream fl;
				float value;
				std::string key;
				for (size_t j = 0; j < i; j++)
					key += line[j];
				key += '\0';
				fl << &line[i + 1];
				fl >> value;
				std::cout << key << value << std::endl;
				map.insert(std::pair<std::string, float>(key, value));
			}
			else {
				std::cout << "Error: bad input => " << line << std::endl;
				continue ;
			}
		}
		// for(std::map<std::string, float>::const_iterator it = map.begin(); it != map.end(); it++)
		// 	std::cout << it->first << "| |" << it->second << std::endl;
	}
}
