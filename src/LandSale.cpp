/*
 * LandSale.cpp
 *
 *  Created on: Oct 18, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "LandSale.h"

using namespace std;


LandSale::LandSale(string street, string city, Customer owner, RealEstateAgent whoisrenting, Date rentstart, double whicharea, int cost)
	:Property(street, city, owner, whoisrenting, rentstart)
{
	area=whicharea;
	price=cost;
}

LandSale::LandSale()
	:Property()
{
	area=0.0;
	price=0;
}

LandSale::~LandSale()
{

}

void LandSale::print()
{
	Property::print();
	cout <<"\nthe land is in the area:  " << area <<" , and it costs: " << price;
}
