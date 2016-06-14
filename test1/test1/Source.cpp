#include <iostream>
#include <string>
#include <cassert>

class simpleUrlUsage {
private:
	std::string protocol;
	std::string resource;
public:
	simpleUrlUsage(const std::string & pro, const std::string & res);
	std::string getUrl() const;
	//impleUrlUsage();
	void printUrl();
	bool isQueryable();

};

void f(const simpleUrlUsage & url)
{
	url.getUrl();
}

simpleUrlUsage::simpleUrlUsage(const std::string & pro, const std::string & res) : protocol(pro), resource(res) {}
bool simpleUrlUsage::isQueryable() {
	std::string url = getUrl();

	auto posn = url.find("http://");
	//url.erase(0, 4);
	return posn == 0;

	//std::string str1;
	//std::string str2;
	//
	//for (auto itr = url.begin(); itr < url.begin() + 4; itr++) {
	//	str1 += *itr;
	//}
	//for (auto itr = url.end() - 1; itr < url.end() - 5; itr--) {
	//	str2 += *itr;
	//}
	//bool check1 = str1 == 
	//return true;
}

std::string simpleUrlUsage::getUrl() const {
	return protocol + ":" + resource;
}

void simpleUrlUsage::printUrl() {
	std::string address = protocol + ":" + resource;
	std::cout << "Url is : " << address << std::endl;
}

std::string operator""_asString(unsigned long long y) { return std::to_string(y); }

int main() {

	std::string protocol1 = "http";
	std::string resource1 = "//curbralan.com";
	
	using namespace std::literals;
	simpleUrlUsage test("http"s, "//curbralan.com");

	auto i = 5.0f;
	auto s = 1234_asString;
	Meters f = 123.4_m;

	test.printUrl();

	assert(test.isQueryable());
	
	std::string myBrowser = "chrome " + test.getUrl();
	system(myBrowser.c_str());
	
	//std::printf("%c", protocol1.back());
	
	return 0;
}