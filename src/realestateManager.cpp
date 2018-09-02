/*
 * realestateManager.cpp
 *
 *  Created on: Oct 18, 2013
 *      Author: kaveh
 */
#include <iostream>
#include "realestateManager.h"


realestateManager::realestateManager()
{

for(int i=0; i < max_number_of_agents ; i++)
	{
		agentRecordsArray[i]=new RealEstateAgent();
	}

for(int i=0 ; i < listingsize ; i++)
	{
	 	propertyListingArray[i]=new Property();
	}

for(int i=0; i < archivesize ;i++)
	{
		archiveRecordsArray[i]=new Property();
	}


}


bool realestateManager::insertAgent(RealEstateAgent *agent)
{
	for( int i=0; i < max_number_of_agents ; i++)
	{
		if ( agentRecordsArray[i]->getemployeeid() == 0 )
		{
			agentRecordsArray[i] = agent;
			return true;
			break;
		}

	}
	return false;
}

bool realestateManager::insertProperty(Property *managedproperty)
{
	for( int i=0; i < listingsize ; i++ )
	{
		if ( propertyListingArray[i]->getcityname() == "default" )
		{
			propertyListingArray[i] = managedproperty;
			propertyListingArray[i]->print();
			return true;
			break;
		}
	}
	return false;
}


bool realestateManager::propertysoldrented(Property *salerentproperty, Customer *newcustomer)
{
	Property a;
	for(int i=0; i< listingsize ; i++)
	{
		if( (propertyListingArray[i]->getlandlordSIN() != newcustomer->getSIN())
				&& ( propertyListingArray[i]->getcustomerSIN() == a.getcustomerSIN()))
		{
			propertyListingArray[i]->setcustomer( newcustomer );

			for (int j=0;   j< listingsize ; j++)
			{
				if( archiveRecordsArray[j]->getcityname() == "default")
				{
					archiveRecordsArray[j] = propertyListingArray[i];
					propertyListingArray[i] = new Property();
				}
			}
			cout <<"\nsuccessful rental\n";
			return true;
			break;
		}

		else
		{

			if(  propertyListingArray[i]->getlandlordSIN() != newcustomer->getSIN( ) )
					{
						propertyListingArray[i]->setlandlord( newcustomer);

						for (int j=0;   j< listingsize ; j++)
						{
							if( archiveRecordsArray[j]->getcityname() == "default")
							{
								archiveRecordsArray[j] = propertyListingArray[i];
								propertyListingArray[i] = new Property() ;
							}
						}

						cout <<"\nsuccessful sale\n";
						return true;
						break;

					}

		}
	}


	cout << "unsuccessful rental or sale\n";
	return false;
}


void realestateManager::findPropertiesCity( string city)
{
	cout << "the property listing as land sale of: " << city << " are: ";

	LandSale *downcastingLand;

	int count=0;
	for(int i=0; i< listingsize ; i++)
	{
		downcastingLand = dynamic_cast < LandSale*> ( propertyListingArray[i]);

		if( downcastingLand != 0)
		{

			if ( propertyListingArray[i]->getcityname() == city )
			{
				count++;
				cout <<"\nProperty found number: " << count;
				propertyListingArray[i]->print();
			}


		}


	}


	if( count == 0 )
	{cout <<"\nthe city: " << city << " has no land sale in our data base.";}



	cout << "\nthe property listing as house sale of: " << city << " are: ";

	count = 0;
	HouseSale *downcastingHouse;
		for(int i=0; i< listingsize ; i++)
		{

			downcastingHouse = dynamic_cast < HouseSale*> ( propertyListingArray[i]);

			if( downcastingHouse != 0)
			{

				if ( propertyListingArray[i]->getcityname() == city )
				{
					count++;
					cout <<"\nProperty found number: " << count;
					propertyListingArray[i]->print();
				}


			}





		}

		if (count == 0	)
				{cout <<"\nthe city: " << city << " has no house sale in our data base.";}


		downcastingLand=NULL;
		downcastingHouse=NULL;
}




void realestateManager::findPropertiesAgent(RealEstateAgent *name)
{
	int count = 0;
	RealEstateAgent *downcastAgent;
	for(int i=0; i < max_number_of_agents ; i++)
	{
		downcastAgent = dynamic_cast < RealEstateAgent* > ( agentRecordsArray[i] );

		if( downcastAgent != 0 )
		{
			if( propertyListingArray[i]->getagentid() == name->getemployeeid() )
			{
				count++;
				cout << "\nthe property number: " << count;
				propertyListingArray[i]->print();
			}
		}
		else cout <<"\nthe agent: " << name->getemployeeid() << " has no data in our data base.";
	}

	downcastAgent=NULL;
}

realestateManager::~realestateManager()
{
	delete [] agentRecordsArray;
	delete [] propertyListingArray;
	delete [] archiveRecordsArray;

delete	agentRecordsArray ;
delete	propertyListingArray ;
delete	archiveRecordsArray ;



}
