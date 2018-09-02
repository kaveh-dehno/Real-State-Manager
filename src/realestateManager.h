/*
 * RealStateManager.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef REALSTATEMANAGER_H_
#define REALSTATEMANAGER_H_
#include <string>
#include "RealEstateAgent.h"
#include "Property.h"
#include "Customer.h"
#include "LandSale.h"
#include "HouseSale.h"
#include "HouseRental.h"

using namespace std;


class realestateManager
{
public:
	realestateManager( );

 // insertAgent function adds a new agent to the agentRecordsArray
    bool insertAgent(RealEstateAgent *);

// insertProperty function adds a property to the first available location in the
// propertyListingArray
   bool insertProperty(Property *);

// When a property is sold/rented, the customer will be stored in the Property object and
// the object itself will be transferred from propertyListingArray to the
// archiveRecordsArray and null value will be inserted at its location at the
// propertyListingArray.
    bool propertysoldrented(Property *, Customer * );

// findPropertiesCity function determines all the properties for sale in a given city and
// prints them. String parameter of the function corresponds to a city name. You would
// need to use dynamic_cast to determine the class of the objects stored in the
// propertyListingArray (See section 13.8 in the textbook)
    void  findPropertiesCity( string);

// findPropertiesAgent function determines all the listings of an agent and prints them.
    void findPropertiesAgent(RealEstateAgent *);

    ~realestateManager();

private:

 	 static const int max_number_of_agents = 30;
 	 static const int listingsize = 1000;
 	 static const int archivesize = 2000;

// The followings are static array of pointers, all the arrays should be initialized to null values.


 	 RealEstateAgent * agentRecordsArray[max_number_of_agents];

 	 Property * propertyListingArray[listingsize];
 	 Property * archiveRecordsArray[archivesize];


};



#endif /* REALSTATEMANAGER_H_ */
