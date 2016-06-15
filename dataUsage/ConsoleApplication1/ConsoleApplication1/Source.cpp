#include <iostream>
#include <cassert>

#include "date.h"

int main() {

	date date1(2016, date::Jun, 15, date::Sat);
	date date2(date1);
	date * date3 = &date2;

	//date3.getYear;
	date3->getYear();

	*date3 = date2; //assignment
	assert((date1 == date2) == true);

	assert(date1.getMonth() == 6);
	std::cout << date::Sat << std::endl;
	int i = date::Sat;


	return 0;
}