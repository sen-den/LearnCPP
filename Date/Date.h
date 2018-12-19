#pragma once

struct Date {
	unsigned short int day;
	unsigned short int month;
	long int year;
};

void print(Date date);
bool isEqual(Date d1, Date d2);
void logEqualTest(Date d1, Date d2);

Date nextDay(Date date);