#include <iostream>
#include "urlHistory.hpp"
#include "urls.hpp"

int main() {
	
	urlHistory urlsHist1;
	urlHistory urlHist2(urls("http", "//google.com"));
	std::cout << urlsHist1.numberOfUrls << std::endl;
	return 0;
	
}