#pragma once

struct Date {
	int32_t y;
	uint8_t m;
	uint8_t d;
};

/*
void print(Date date);
bool isEqual(Date d1, Date d2);
void logEqualTest(Date d1, Date d2);
*/

Date nextDay(Date date);