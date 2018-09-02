/*
 * HouseSale.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "HouseSale.h"


HouseSale::HouseSale(string street, string city, Customer owner,
		RealEstateAgent whoisrenting, Date rentstart, int age, int rooms, int money)

	:Property( street, city, owner, whoisrenting, rentstart )
{
	year_of_built=age;
	no_of_rooms=rooms;
	price=money;
}

HouseSale::HouseSale()
	:Property()
{
	year_of_built=0;
	no_of_rooms=0;
	price=0;
}

HouseSale::~HouseSale()
{

}

void HouseSale::print()
{
	cout << "\nthe house was built on: " << year_of_built << " ,the house has "
		<< no_of_rooms << " rooms" << " ,the price of the house is: " << price;
	cout << " ,the property information is: ";
	Property::print();
}
