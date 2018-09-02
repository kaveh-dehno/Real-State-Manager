/*
 * Date.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */


#ifndef DATE_H_
#define DATE_H_


class Date
{
public:

	Date(int, int, int);		//the default and overloaded constrauctor
	Date();
	void print();		//a function to print members
	void setdate(int, int, int);	// a function to set values

//	void getdate() const;	// a function to get the members all at once
	int getday() const;		//function to get the day member
	int getmonth() const;	//function to get the month member
	int getyear() const;	//function to get the year member

private:
	int day;			// the day as meber
	int month;			// the month as member
	int year;			// the year as member
	int checkday( int ) const;		// a function to check if the day is valid
};


#endif /* DATE_H_ */
