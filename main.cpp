/*
Programmer: Morgan Thorne
Date: 12/8/2025
Program function:



*/

#include <iostream>
#include "Date.h"

int main() {

	cout << "Testing default construct: ";
	Date d1;
	cout << d1.StringNumeric() << endl;

	cout << "Testing valid construct (2/29/2008): ";
	Date d2(2, 29, 2008);
	cout << d2.StringNumeric() << endl;

	cout << "Testing invalid month (45/2/2009): ";
	Date d3(45, 2, 2009);
	cout << d3.StringNumeric() << endl;

	cout << "Testing invalid day (2/29/2009): ";
	Date d4(2, 29, 2009);
	cout << d4.StringNumeric() << endl;

	cout << "\nPrinting format for 2'/29/2008:" << endl;
	cout << d2.StringLong() << endl;
	cout << d2.StringDayMonth() << endl;

	return 0;

}