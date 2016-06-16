#pragma once
#include <tuple>
enum class Month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

class Date {

public:

	//explicit date(int year, Month month, int day) : year(year), month(month), day(day) {}
	//Date(std::tuple<int, Month, int> date): date(date) {}
	explicit Date(std::tuple<int, Month, int> date) : date(date) {}
	operator std::tuple<int, Month, int> () const { return date; }

private:

	std::tuple<int, Month, int> date;

	/*int year, day;
	Month month;*/
};

class Year {

public:
	
	explicit Year(int y) : year(y) {}
	operator int() const { return year; }
	int getYear() const { return year; }

private:
	int year;
};