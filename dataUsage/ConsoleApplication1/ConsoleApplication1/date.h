#pragma once
#include <tuple>

class date {

public:

	enum Month {
		Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
	};

	enum DayOfWeek {Mon = 1, Tue, Wed, Thr, Fri, Sat, Sun};
	
	//static const int Janu = 1;
	//date() = default;

	date(int yy, Month mm, int dd, DayOfWeek dw) : year(yy), month(mm), day(dd), dayOfWeek(dw) {}

	//date(const date & dateObj) : year(dateObj.year), month(dateObj.month), day(dateObj.day){}

	//date(const int yy, Month mon, )

	int getYear() const { return year; }
	int getMonth() const { return month; }
	int getDay() const { return day; };


	date & operator=(const date & obj) { year = obj.year; month = obj.month; day = obj.day; return *this; }
	Month m = Apr;

private:
	Month month;
	DayOfWeek dayOfWeek;
	int year, day;
};

bool operator==(const date & date1, const date & date2) {
	return std::make_tuple(date1.getYear(), date1.getMonth(), date1.getDay()) == std::make_tuple(date2.getYear(), date2.getMonth(), date2.getDay());
}