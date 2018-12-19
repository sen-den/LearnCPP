#include <iostream>
#include <string>
#include "Date.h"

bool isLeapYear(long int year);
short int dayInYearsMonthCount(short int month, long int year);

bool isLeapYear(long int year)
{
	bool res =
		(year % 4 == 0) && (year % 100 != 0)
		|| (year % 400 == 0);

	return res;
}

short int dayInYearsMonthCount(short int month, long int year)
{
	short int res = 31;

	if (month < 1 || month > 12)
	{
		res = 0;
	}
	else if (month == 2)
	{
		res = isLeapYear(year) ? 29 : 28;
	}
	else if (month == 1
		|| month == 3
		|| month == 5
		|| month == 7
		|| month == 8
		|| month == 10
		|| month == 12)
	{
		res = 31;
	}
	else if (month == 4
		|| month == 6
		|| month == 9
		|| month == 11)
	{
		res = 30;
	}

	return res;
}

void print(Date date)
{
	std::cout << date.day << "." << date.month << "." << date.year << std::endl;
}

bool isEqual(Date d1, Date d2)
{
	bool res =
		d1.day == d2.day
		&& d1.month == d2.month
		&& d1.year == d2.year;

	return res;
}

void logEqualTest(Date d1, Date d2)
{
	std::cout << (isEqual(d1, d2) ? "EQUAL" : "NOT EQUAL") << std::endl;
	print(d1);
	print(d2);
	std::cout << std::endl;
}

Date nextDay(Date date)
{
	Date res = date;

	if (res.day < 1
		|| res.day > dayInYearsMonthCount(res.month, res.year)
		|| res.month < 1
		|| res.month > 12)
	{
		return date;
	}

	res.day++;

	if (res.day > dayInYearsMonthCount(res.month, res.year))
	{
		res.day = 1;
		res.month++;
	}

	if (res.month > 12)
	{
		res.month = 1;
		res.year++;
	}

	return res;
}
