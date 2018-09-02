/*
 * HouseRental.cpp
 *
 *  Created on: Oct 18, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "HouseRental.h"

using namespace std;



HouseRental::HouseRental(string street, string city, Customer owner, RealEstateAgent whoisrenting , Date rentstart, int year, int room, int rent)
	:Property( street, city, owner, whoisrenting, rentstart)
{
	year_of_built=year;
	no_of_rooms=room;
	monthly_rental=rent;
}

HouseRental::HouseRental()
	:Property()
{
	year_of_built=0;
	no_of_rooms=0;
	monthly_rental=0;
}

HouseRental::~HouseRental()
{

}

void HouseRental::print()
{
	Property::print();
	cout << "\nthe house was built on: " << year_of_built <<" ,it has: " << no_of_rooms
			<< " rooms, and it's monthly rental is: " << monthly_rental;
}

