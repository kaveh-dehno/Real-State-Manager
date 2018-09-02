/*
 * RealStateAgent.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef REALSTATEAGENT_H_
#define REALSTATEAGENT_H_
#include <string>
#include "Person.h"


using namespace std;

class RealEstateAgent : public Person
{
  public:
       RealEstateAgent( string, string, Date, Date, int);
       RealEstateAgent();
       int getemployeeid( ) const;
//       getcustomername() const;
        ~ RealEstateAgent( );
       virtual void print( );


  private:
     Date employmentdate;
     int employeeid;
};


#endif /* REALSTATEAGENT_H_ */
