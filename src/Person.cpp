/*
 * Person.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */
#include<iostream>
#include<string>
#include"Person.h"

using namespace std;

Person::Person( string first,string addres, Date dateofbirth)
	:birthdate( dateofbirth )
{
	name=first;
	address=addres;
}

Person::~Person()
{

}

Person::Person()
	:birthdate()
{
	name="";
	address="";
}


void Person::getname()
{
	cout << name;
}
void Person::print()
{
	cout << "\nname is: " << name  << " address is: " << address << " he was born on: ";
	birthdate.print();
}
