#include "iter.hpp"

int main( void ) {
	char test[5] = "truc";
	iter(test, 4, printarray(test));
	return 0;
}
