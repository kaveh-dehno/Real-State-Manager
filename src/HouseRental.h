/*
 * HousReantal.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef HOUSREANTAL_H_
#define HOUSREANTAL_H_
#include<string>
#include "Property.h"



using namespace std;

class HouseRental: public Property
 {
public:
       HouseRental(string, string, Customer, RealEstateAgent, Date, int, int, int);
       HouseRental();
       ~ HouseRental( );
       virtual void print( );

private:
      int year_of_built;
      int no_of_rooms;
      int monthly_rental;
};



#endif /* HOUSREANTAL_H_ */
