#include <iostream>
#include <list>
#include <cassert>
#include <algorithm>
#include "Header.hpp"

int main() {

	//std::list<std::string> lis = {};

	UsedList uList;

	uList.addToList("file1.txt");

	assert(uList.size() == 1);
	
	uList.addToList("file2.txt");

	assert(uList.size() == 2);

	uList.addToList("file2.txt");

	assert(uList.size() == 2);

	for (const auto & i : uList)
		std::cout << i << std::endl;


	//std::list<int> lis{ 1,2,3 };
	////for (auto i : lis)
	////	std::cout << i << std::endl;
	//lis.push_front(12);
	//for (auto i : lis)
	//	std::cout << i << std::endl;

	//auto it = std::find(list.begin(), list.end(), "file1.txt");
	
	/*assert(*it == "file1.txt");
	assert(list.size() == 2);
	assert(list.empty() == 0);*/
	

	return 0;
}