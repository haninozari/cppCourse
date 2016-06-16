#pragma once

//class Year {
//
//public:
//	explicit Year(int year) : year(year) {}
//	operator int() const { return year; }
//
//private:
//	int year;
//};
//
//Year operator""_yr(unsigned long long v) { return Year(v); }

template <typename T>
class myClass {
public:
	explicit myClass(T v) : value(v) {}

private:
	T value;
};

myClass<int> c1(2);

enum class UnitType {yearType, monthType, dayType};

template <UnitType U>
class Unit {
public:
	explicit Unit(int v) : Value(v) {}
	operator int() const { return Value; }

private:
	int Value;
};

using Year = Unit<UnitType::yearType>;
using Month = Unit<UnitType::monthType>;
using Day = Unit<UnitType::dayType>;

class Date {

public:
	explicit Date(Year y, Month m, Day d): year(y), month(m), day(d) {}
private:
	Year year;
	Month month;
	Day day;
};