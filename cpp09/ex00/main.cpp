#include "BitcoinExchange.hpp"

int main (int ac, char **argv) {

	if (ac != 2 || argv[1][0] == '\0') {
		std::cout << "No file in input" << std::endl;
		return 0;
	}
	else {
		BitcoinExchange btc;
		btc.readInputFile(argv[1]);
	}
}
