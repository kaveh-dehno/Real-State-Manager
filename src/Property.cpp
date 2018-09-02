/*
 * Property.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "Property.h"

using namespace std;

Property::Property(string street, string city, Customer owner, RealEstateAgent whoisrenting, Date rentstart)
	:landlord( owner), agent( whoisrenting ),listingdate( rentstart ),customer() //check the deafult constructor for customer, should be ""
{
	street_address=street;
	cityname=city;


}


Property::Property()
	:landlord(),agent(),listingdate(),customer()
{
	street_address="default";
	cityname="default";

}

Property::~Property()
{

}

string Property::getcityname() const
{
	return cityname;
}

string Property::getlandlordSIN() const
{
	return landlord.getSIN();
}


int Property::getagentid( ) const
{
	return agent.getemployeeid();
}

string Property::getcustomerSIN() const
{
	return customer.getSIN();
}


void Property::setcustomer( Customer *newcustomer)
{
	customer = *newcustomer;
}


void Property::setlandlord( Customer *newcustomer )
{
	landlord = *newcustomer;
}
void Property::print()
{
	cout << "\nthe property address is: " << street_address << " ,in the city: " << cityname;
	cout << " ,the landlord is: ";
	landlord.getname();
	cout << " ,the agent is: ";
	agent.getname();
	cout << " ,the listing date is: ";
	listingdate.print();
//	cout << " ,the customer is: " << customer;
}
