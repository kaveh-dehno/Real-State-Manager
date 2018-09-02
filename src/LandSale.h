/*
 * LandSale.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef LANDSALE_H_
#define LANDSALE_H_
#include <string>
#include "Property.h"


using namespace std;

class LandSale: public Property
{
public:
      LandSale(string, string, Customer, RealEstateAgent, Date, double, int);
      LandSale();
       ~ LandSale( );
      virtual void print( );

private:
      double area;
      int price;
};


#endif /* LANDSALE_H_ */
