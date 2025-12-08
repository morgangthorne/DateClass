#ifndef DATE_H
#define Date_H

#include <strings>

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

	//Last-Day overloads

	//print

private:

	int month;
	int day;
	int year;

	//Help

};

#endif