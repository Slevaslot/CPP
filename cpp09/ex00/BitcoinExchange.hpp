#ifndef MUTANTSTACK
# define MUTANTSTACK

#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <sstream>

class BitcoinExchange {
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &a);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &a);
		void readInputFile(std::string input);

	private :
		std::map<std::string, float> _data;
};

#endif
