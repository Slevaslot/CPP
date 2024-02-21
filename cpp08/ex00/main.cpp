#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator i;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int r = rand() % 10;

		vec.push_back(r);
		std::cout << "array[" << i << "] = " << r << std::endl;
	}
	int to_find = rand() % 10;
	std::cout << "to_find = " << to_find << std::endl;
	try
	{
		i = easyfind(vec, to_find);
		std::cout << *i << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
