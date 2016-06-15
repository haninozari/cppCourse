#include <iostream>
#include <tuple>
#include <vector>

enum Day {Mon, Tue, Wed, Thr, Fri, Sat, Sun};

bool operator<=(const std::tuple<int, Day> & tuple1, const std::tuple<int, Day> & tuple2) {
	return tuple2 >= tuple1;
}

int main() {

	std::tuple<int, Day> tuple1(12, Mon);
	std::tuple<int, Day> tuple2(13, Thr);
	std::vector<int> v;

	std::tuple<int, std::string, std::vector<int> > tuple3 = std::make_tuple(12, "Hi!", v);

	bool b1 = tuple1 == std::make_tuple(12, Mon);
	bool b2 = tuple2 <= tuple2;

	return 0;
}