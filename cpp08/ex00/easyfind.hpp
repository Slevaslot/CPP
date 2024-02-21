#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <map>
#include <stdexcept>
#include <iterator>
#include <cctype>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T &array, int n)
{
	typename std::vector<int>::iterator it = std::find(array.begin(), array.end(), n);
	if (it != array.end())
		return it;
	else
	{
		throw std::exception("cannot find occurence in the array");
		return array.end();
	}
}

template <typename key, typename value>

typename std::map<key, value>::iterator easyfind(std::map<key, value> &array, int n)
{
	for (typename std::map<key, value>::iterator it = array.begin(); it != array.end(); ++it)
	{
		if (it->second == n)
			return it;
		else {
			throw std::exception("cannot find occurence in the array");
			return array.end();
		}
	}
}

template <typename key, typename value>

typename std::multimap<key, value>::iterator easyfind(std::multimap<key, value> &array, int n)
{
	for (typename std::multimap<key, value>::iterator it = array.begin(); it != array.end(); ++it)
	{
		if (it->second == n)
			return it;
		else {
			throw std::exception("cannot find occurence in the array");
			return array.end();
		}
	}
}

#endif
