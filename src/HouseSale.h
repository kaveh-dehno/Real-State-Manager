/*
 * HouseSale.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef HOUSESALE_H_
#define HOUSESALE_H_
#include"Property.h"
#include "RealEstateAgent.h"


using namespace std;

class HouseSale: public Property
 {
public:
       HouseSale(string, string, Customer, RealEstateAgent, Date, int, int, int);
       HouseSale();
        ~ HouseSale( );
       virtual void print( );

private:
      int year_of_built;
      int no_of_rooms;
      int price;
};



#endif /* HOUSESALE_H_ */
