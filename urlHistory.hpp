#pragma once
#include "urls.hpp"
#include <vector>
#include <algorithm>

class urlHistory {
private:
	std::vector<urls> history;
public:
	urlHistory();
	urlHistory(const urls & URL);
	static int numberOfUrls;
	bool doesExist(const urls & u) const;
};

int urlHistory::numberOfUrls = 0;

urlHistory::urlHistory() {
	++numberOfUrls;
}
urlHistory::urlHistory(const urls & URL){
	if (!doesExist(URL)) {
		++numberOfUrls;
		history.push_back(URL);
	}
		
}
bool urlHistory::doesExist(const urls & u) const {
#if 1
	auto i = std::find_if(history.begin(), history.end(), [&u](const urls & x) { return x == u; });
#else
	auto i = std::find(history.begin(), history.end(), u);
#endif
	return i != history.end();
}