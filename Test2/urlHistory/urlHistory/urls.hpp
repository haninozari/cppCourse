#pragma once
#include <string>
#include <vector>
#include <iostream>

class urls {
private:
	std::string protocol, resource;
public:
	operator std::string() const { return protocol + ":" + resource; };
	explicit operator std::string()  { return protocol + ":" + resource;  };
	
	explicit urls(const std::string & name); // by making it explicit it is just a constructor and not converter

	/*operator urls() const {

	};*/
	
	//explicit operator std::string() const;
	urls(const std::string & pro, const std::string & res);
	
	std::string getUrl() const;
	std::string getProt(const std::string & name) const;
	std::string getRes(const std::string & name) const;
	void printUrl();
	bool isQueryable();
};

urls::urls(const std::string & name) {
	protocol = getProt(name);
	resource = getRes(name);
}
bool operator==(const urls & u1, const urls & u2)
{
	return u1.getUrl() == u2.getUrl();
}

urls::urls(const std::string & pro, const std::string & res) : protocol(pro), resource(res) {}

std::string urls::getProt(const std::string & name) const {
	return name.substr(0,7);
}
std::string urls::getRes(const std::string & name) const {
	return name.substr(name.size() - 4);
}
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

