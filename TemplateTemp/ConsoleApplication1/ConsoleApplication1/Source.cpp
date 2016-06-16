#include <iostream>
#include <tuple>

//#include "Header.hpp"
#include "Date.hpp"

//int main_old() {
//	
//	
//	//date d1(2016, Month::Apr, 12);
//	Date d1(std::make_tuple(2014, Month::May, 12));
//
//	Date d2 = Date(std::tuple<int, Month, int>(d1));
//
//	//Date d3 = d2;
//	Year y1(1204);
//	Year Y2 = Year(int(y1) + 2);
//
//	return 0;
//}



int main() {
	
	Year y1(1234);
	Month m1(12);
	Day d1(2);
	
	//Year y2 = Year(int(y1) + 2);
	Year y3 = Year(y1 + 2);
	Month m3 = Month(m1 - 2);
	Day d3 = Day(d1 * 2);

	Unit<UnitType::dayType> d4(12);

	Date date1(y1, m1, d1);
	Date date2(Year(2014), Month(12), Day(11));


	return 0;
}