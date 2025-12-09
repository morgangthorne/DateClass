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

	return IsLeapYear(year);
}

//Static
bool Date::IsLeapYear(int year) {

	if (year % 400 == 0) return true;
	if (year % 100 == 0) return false;

	return (year % 4 == 0);
}

//Last day
int Date::LastDay() const {

	return LastDay(month, year);
}

//static
int Date::LastDay(int month, int year) {

	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12)
		return 31;

	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;

	if (IsLeapYear(year))
		return 29;
	else
		return 28;
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
	static const string Names[] = {

		"Invalid", "January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	
	};

	if (m < 1 || m > 12) return "Invalid";
	return Names[m];
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
