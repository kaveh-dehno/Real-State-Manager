/*
 * Date.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int dy, int mn, int yr)
{

	setdate( dy, mn, yr);
}
Date::Date()
{
	day=1;
	month=1;
	year=2000;
}


int Date::checkday(int testday) const
{
	static const int dayspermonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	if( testday > 0 && testday <= dayspermonth[ month ])
		return testday;

	if ( month == 2 && testday == 29 && ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0)))
		return testday;
	else
	{
		cout << testday <<" is invalid day.";
		return 1;
	}
}

void Date::print()
{
	cout << endl;
	cout << this->getday() << "/" << this->getmonth() << "/" << this->getyear() << endl;
}

void Date::setdate(int dy, int mn, int yr)
{
	day=dy;
	month=mn;
	year=yr;

	if( (month > 0) && (month <= 12) )
		month=mn;

	else
	{
		cout << "The month: " << mn << " is wrong and is set to 1.";
		month=1;
	}

	year = yr;

	day = checkday( dy );
}



/*
void Date::getdate() const
{
	getday();
	getmonth();
	getyear();
}
*/
int Date::getday() const
{
	return day;
}

int Date::getmonth() const
{
	return month;
}

int Date::getyear() const


{
	return year;
}

