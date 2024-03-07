#include "iter.hpp"

int main( void ) {
	char test[5] = "test";
	iter(test, 3, printarray);
	return 0;
}
