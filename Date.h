#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class Date {
public:

	//Constructor proto
	Date(int M = 1, int D = 1, int y = 1900);



	//Mutator
	void SetDate(int M, int D, int Y);


	//Accessors
	int GetMonth() const; 
	int GetDay() const;
	int GetYear() const;

	//Leap year overloads
	bool IsLeapYear() const;
	static bool IsLeapYear(int year);

	//Last-Day overloads
	int LastDay() const;
	static int LastDay(int month, int year);

	//print
	string StringNumeric() const;
	string StringLong() const; 
	string StringDayMonth() const;

private:

	int month;
	int day;
	int year;

	//Help
	static bool ValidDate(int M, int D, int Y);
	static string MonthName(int M);
};

#endif