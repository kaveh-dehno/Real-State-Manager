//============================================================================
// Name        : Real State Manager
// Author      : kaveh Dehno
// Version     :
// Copyright   : Make your own program !!!

// Description : This program is able to do the following:
//		* Add Real State Agents
//		* Add properties to database
//		* Look up properties in database
//
//		* The main.cpp shows the functionality of the program.
//
//============================================================================

#include <iostream>
#include "Date.h"
#include "Customer.h"
#include "RealEstateAgent.h"
#include "Property.h"
#include "HouseSale.h"
#include "HouseRental.h"
#include "LandSale.h"
#include "realestateManager.h"

using namespace std;

int main() {


cout << "Description : This program is able to do the following:\n"
"		* Add Real State Agents\n"
"		* Add properties to database\n"
"		* Look up properties in database\n"
"\n"
"		* The main.cpp shows the functionality of the program.\n"
"\n";

	Date m( 1,1,2001);
	Date q( 2, 2, 2002);
	Date r( 3, 3, 2003);
	Date z( 4, 4, 2004);

	Customer customer1(" kaveh ", " 1350 du fort ", m, "1234");
	Customer customer2(" alberto ", " McKay ", q, "5678");
	Customer customer3(" calros ", " peel ", r, "9101");

	Customer *c1=&customer1;
	Customer *c2=&customer2;
	Customer *c3=&customer3;




	RealEstateAgent agent1("Chris", "downtown", z, r, 1111);
	RealEstateAgent agent2("You", "old port", r, z, 2222);
	RealEstateAgent agent3("Me", "plateau", q, m, 3333);


	RealEstateAgent *a1=&agent1;
	RealEstateAgent *a2=&agent2;
	RealEstateAgent *a3=&agent3;




	HouseSale *house1 = new HouseSale("st-catherin", "montreal", customer1, agent1, m, 2002, 5, 100000 );
	HouseSale *house2 = new HouseSale("duramond", "montreal", customer2, agent1, q, 2003, 6, 200000 );
	HouseSale *house3 = new HouseSale("Guy", "montreal", customer3, agent1, r, 2004, 7, 300000 );




	HouseRental *renting1 = new HouseRental( "maisoneauve", "edmonton", customer1, agent1, z, 2013, 4, 400);
	HouseRental *renting2 = new HouseRental( "rene-levesque", "edmonton", customer2, agent1, r, 2013, 4, 500);
	HouseRental *renting3 = new HouseRental( "sherbrook", "edmonton", customer3, agent1, q, 2013, 4, 600.000);



	LandSale land1( "rene-levesque", "vancouver", customer1, agent1, q, 2, 150000);

	realestateManager manager1;

if(	manager1.insertAgent( a1 ) == true )
{
	cout << "\nsuccessful agent insertion of: ";
	agent1.print();

}
else cout <<"\nunsuccessful agent insertion.";


if(	manager1.insertAgent( a2 ) == true )
{
	cout << "\nsuccessful agent insertion of: ";
	agent2.print();

}
else cout <<"\nunsuccessful agent insertion.";

if(	manager1.insertAgent( a3 ) == true )
{
	cout << "\nsuccessful agent insertion of: ";
	agent3.print();

}
else cout <<"\nunsuccessful agent insertion.";




cout << "\nThe insertion of house1.";
if( manager1.insertProperty( house1 ) == true )
{
	cout << "\nsuccessful property insertion of house 1.\n";
}

else cout <<"\nunsuccessful property insertion.\n";




cout << "\nThe insertion of house2.";
if( manager1.insertProperty( house2 ) == true )
{
	cout << "\nsuccessful property insertion of house 2.\n ";
}

else cout <<"\nunsuccessful property insertion.\n";



cout << "\nThe insertion of house3.";
if( manager1.insertProperty( house3 ) == true )
{
	cout << "\nsuccessful property insertion of house 3.\n";
}

else cout <<"\nunsuccessful property insertion.\n";

manager1.findPropertiesCity( "montreal");

manager1.findPropertiesCity( "montreal");


cout <<"\nrenting a property";
manager1.propertysoldrented( house1, c2 );

manager1.findPropertiesCity( "montreal");

cout << "\nproperties found for agent: ";
	agent1.getname();
	cout << " are: ";
manager1.findPropertiesAgent( a1 );



c1=NULL;
c2=NULL;
c3=NULL;

a1=NULL;
a2=NULL;
a3=NULL;

house1=NULL;
house2=NULL;
house3=NULL;

renting1=NULL;
renting2=NULL;
renting3=NULL;


	cout << "\nend of the program." << endl; // prints \nend of the program.
	return 0;
}
