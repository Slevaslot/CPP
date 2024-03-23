#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
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
