#include "BitcoinExchange.hpp"

int main (int ac, char **argv) {

	if (ac != 2 || argv[1][0] == '\0') {
		std::cout << "No file in input" << std::endl;
		return 0;
	}
	else {
		BitcoinExchange btc;
		btc.readInputFile(argv[1]);
		// for(std::map<std::string, float>::const_iterator it = btc.map.begin(); it != btc.map.end(); it++)
		// 	std::cout << it->first << " , " << it->second << std::endl;
		// for(std::map<std::string, float>::const_iterator it = btc.inp_map.begin(); it != btc.inp_map.end(); it++)
		// {
		// 	std::cout << it->first;
		// 	if (it->second != -1)
		// 		std::cout << " | " << it->second << std::endl;
		// }
	}
}
