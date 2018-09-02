/*
 * Property.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef PROPERTY_H_
#define PROPERTY_H_
#include <string>
#include "Customer.h"
#include "RealEstateAgent.h"
#include "Date.h"

using namespace std;

// the two comments are not done



class Property
{
  public:
        Property(string, string, Customer , RealEstateAgent , Date);
        Property();

        string getcityname() const;
        string getlandlordSIN() const;
        int getagentid() const;
        string getcustomerSIN() const;

        void setcustomer( Customer * );
        void setlandlord( Customer *);
         ~ Property( );
         virtual void print( );

 //

 private:
        string street_address;
        string cityname;
// Customer parameter in the constructor function should be used to initialize landlord.
        Customer landlord;
        RealEstateAgent agent;
        Date listingdate;
// customer should be initialized to an empty string, Ò  Ò.
        Customer customer;
};


#endif /* PROPERTY_H_ */
