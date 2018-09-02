/*
 * RealStateAgent.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "RealEstateAgent.h"


RealEstateAgent::RealEstateAgent(string first, string addres, Date dateofbirth, Date employmentdate, int id)
	:Person( first, addres, dateofbirth)
{
	this->employmentdate=employmentdate;
	employeeid=id;
}

RealEstateAgent::RealEstateAgent()
	:Person(),employmentdate()
{
	employeeid=0;
}

RealEstateAgent::~RealEstateAgent()
{

}

int RealEstateAgent::getemployeeid( ) const
{
	return employeeid;
}



void RealEstateAgent::print()
{
	cout << "\nname: ";
	Person::getname();
	cout <<"\nthe RealEstate Agent was hired on: ";
	employmentdate.print();
	cout << "and his emplyee id is: " << employeeid;
}

