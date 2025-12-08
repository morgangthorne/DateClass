#include "Date.h"
#include <iostream>

//Constructor
Date::Date(int m, int d, int y) {
	SetDate(m, d, y);
}

//Mutator
void Date::SetDate(int m, int d, int y) {

	if (!ValidDate(m, d, y)) {
		
		cout << "Invalid Date!" << endl;
		month = 1;
		day = 1;
		year = 2000;
		
		return;
	}

	month = m;
	day = d;
	year = y;
}

//Accessors
int Date::GetMonth() const { return month; }
int Date::GetDay() const { return day; }
int Date::GetYear() const { return year; }

//Leap Year object
bool Date::IsLeapYear() const {

	return false;
}

//Static
bool Date::IsLeapYear(int year) {

	return false;
}

//Last day
int Date::LastDay() const {

	return 0;
}

//static
int Date::LastDay(int month, int year) {

	return 0;
}

//Validation
bool Date::ValidDate(int m, int d, int y) {
	
	if (m < 1 || m > 12) return false; 
	if (y <= 0) return false;
	
	int Last = Date::LastDay(m, y);
	
	if (d < 1 || d > Last) return false;

	return true;
}

string Date::MonthName(int m) {
	return "";
}

//Print
string Date::StringNumeric() const {
	
	return "";
}

string Date::StringLong() const {
	
	return "";
}

string Date::StringDayMonth() const {

	return "";
}
