#include <iostream>
#include <string>
#include "Date.h"

int main()
{
	/*
	Date d11 = { 19, 12, 2018 };
	Date d12 = { 20, 12, 2018 };
	logEqualTest(nextDay(d11), d12);

	Date d21 = { 31, 12, 2018 };
	Date d22 = { 1, 1, 2019 };
	logEqualTest(nextDay(d21), d22);

	Date d31 = { 29, 2, 2020 };
	Date d32 = { 1, 3, 2020 };
	logEqualTest(nextDay(d31), d32);

	Date d41 = { 28, 2, 2000 };
	Date d42 = { 29, 2, 2000 };
	logEqualTest(nextDay(d41), d42);
	*/


	// Steep to next day
	Date d1 = { 2018, 12, 19 };
	Date d2 = nextDay(d1);
	//DO_TEST(d2 == Date(2018, 12, 20))

	// Steep to next month
	Date d1 = { 2018, 01, 31 };
	Date d2 = nextDay(d1);
	//DO_TEST(d2 == Date(2018, 02, 01))

	// Steep to next year
	Date d1 = { 2018, 12, 31 };
	Date d2 = nextDay(d1);
	//DO_TEST(d2 == Date(2019, 01, 01))

	return 0;
}