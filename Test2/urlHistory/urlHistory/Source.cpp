#include <iostream>
#include "urlHistory.hpp"
#include "urls.hpp"
#include <cassert>

int main() {
	
	urls u("http", "//google.com");
	std::string str1 = static_cast<std::string>(u);
	std::string str2 = u;
	assert(str1 == "http://google.com");
	std::cout << str1 << std::endl;

	std::string add = "http://github.com";
	urls u2(add);
	std::cout << add.substr(add.size() - 4) << std::endl;
	
}