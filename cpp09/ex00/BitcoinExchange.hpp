#ifndef MUTANTSTACK
# define MUTANTSTACK

#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <fstream>
#include <sstream>

#define MAX 131072

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
