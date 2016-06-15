#include <iostream>
#include <string>

int main() {

	std::string str = "Hello!";
	const char * s = str.c_str();

	struct pt {
		int x;
		int y;
	};
	//	aggregate 
	pt p1 { 1, 2 };
	
	return 0;

}