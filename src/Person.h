/*
 * Person.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef PERSON_H_
#define PERSON_H_
#include<string>
#include"Date.h"

using namespace std;


class Person
{
 public:

	Person(string , string , Date );
	Person();
	void getname();
    ~ Person( );
    virtual void print ( );

private:
   string name;
   string address;
   Date birthdate;
};

#endif /* PERSON_H_ */
