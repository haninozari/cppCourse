#pragma once
#include <string>
#include <vector>
#include <iostream>

class urls {
private:
	std::string protocol;
	std::string resource;
public:
	urls(const std::string & pro, const std::string & res);
	
	std::string getUrl() const;
	//impleUrlUsage();
	void printUrl();
	bool isQueryable();
};

bool operator==(const urls & u1, const urls & u2)
{
	return u1.getUrl() == u2.getUrl();
}

urls::urls(const std::string & pro, const std::string & res) : protocol(pro), resource(res) {}

bool urls::isQueryable() {
	std::string url = getUrl();
	return true;
}

std::string urls::getUrl() const {
	return protocol + ":" + resource;
}

void urls::printUrl() {
	std::string address = protocol + ":" + resource;
	std::cout << "Url is : " << address << std::endl;
}

