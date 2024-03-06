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
		while (getline(file, line)) {
			size_t i = 0;
			line.find("|", i);
			if (i != std::string::npos) {
				std::string key;
				std::stringstream fl;
				for (size_t j = 0; j < i; j++) {
					key[j] = line[j];
				}
				i++;
				key[i] = '\0';
				float value;
				fl << &line[i];
				fl >> value;
				map.insert(std::pair<std::string, float>(key, value));
			}
			else {
				std::cout << "Error: bad input => " << line;
				continue ;
			}
    	}
		for(std::map<std::string, float>::const_iterator it = map.begin(); it != map.end(); ++it)
			std::cout << it->first << " " << it->second << std::endl;
	}
}
