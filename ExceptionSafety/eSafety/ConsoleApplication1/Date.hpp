#pragma once
enum class TimeType{yearType, monthType, dayType};
template <TimeType, int low, int high>
class TimeUnit {
public:
	explicit TimeUnit(int v) : value(v) {
		if (v < low || v > high)
			throw std::invalid_argument("Not in range!");
	}
	operator int() { return value;  }
private:
	int value;
};

using Year = TimeUnit<TimeType::yearType, 1000, 3000>;
using Month = TimeUnit<TimeType::monthType, 1, 12>;
using Day = TimeUnit<TimeType::dayType, 1, 31>;

class Date {

public:
	explicit Date(Year yr, Month mth, Day d) : year(yr), month(mth), day(d) {}
	//Date(const Date & obj) : year(obj.year), month(obj.month), day(obj.day) {}

private:
	Year year;
	Month month;
	Day day;
};