#pragma once
#include <list>
#include <iostream>
#include <string>
#include <algorithm>

class UsedList {
public:
	bool doesExist(const std::string & str) const;
	void addToList(const std::string & str);
	int size() const { return list.size(); }
	//std::list<std::string> getList() const { return list; }
	std::list<std::string>::const_iterator begin() const { return list.cbegin(); }
	std::list<std::string>::const_iterator end() const { return list.cend(); }

private:
	std::list<std::string> list;
};

bool UsedList::doesExist(const std::string & str) const {
	auto it = std::find(list.begin(), list.end(), str);
	return it != list.end();
}

void UsedList::addToList(const std::string & str) {
	if (! doesExist(str))
		list.push_back(str);
	list.push_front(str);
	list.erase(std::find(++list.begin(), list.end(), str));
}