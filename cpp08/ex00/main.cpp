#include "easyfind.hpp"

int main() {
	std::vector<int> vect (10);
	std::fill(vect.begin(), vect.end(), 2);
	std::vector<int>::iterator test = easyfind(&vect[0], 3);
	// if (test)
		std::cout << test - vect.begin() << std::endl;
	// std::map<int, int> map;
	// map.insert(std::pair<int,int>( 2, 30 ));
	// map.insert(std::pair<int,int>( 1, 42 ));
	// map.insert(std::pair<int,int>( 3, 42 ));
	// test = easyfind(&map[0]	, 42);
	return 0;
}
