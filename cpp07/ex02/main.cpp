#include "Array.hpp"

int main( void ) {
	try {
		Array<int> test(17);

		for (int i = 0; i < 17; i++) {
			test[i] = i;
		}
		Array<int> testprint(test);
		for (int i = 0; i < 17; i++) {
			std::cout << testprint[i] << std::endl;
		}
		std::cout << testprint[17] << std::endl;
	}
	catch (std::out_of_range & e) {
		std::cerr << e.what();
	}
}
