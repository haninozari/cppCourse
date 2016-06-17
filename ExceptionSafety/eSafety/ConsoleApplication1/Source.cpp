#include <iostream>
#include "Date.hpp"
#include <vector>

int main() {

	try {
		Day d1(0);
	}
	catch(const std::exception & e) {
		std::cout << e.what();
	}
	
	return 0;
}