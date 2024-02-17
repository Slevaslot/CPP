#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stdexcept>
#include <iterator>
#include <cctype>

template <typename T>

typename std::vector<int>::iterator easyfind(T &array, int to_find)
{
	try {
		std::vector<int>::iterator it = std::find(array.begin(), array.end(), to_find);
		if (it == array.end())
			throw std::invalid_argument("No occurence found\n");
		else
			return it;
	}
	catch (std::invalid_argument & e) {
		std::cerr << e.what();
	}
	return ;
}

// template <typename test, typename test_value>



#endif
