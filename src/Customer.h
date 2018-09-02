/*
 * Customer.h
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include<string>
#include"Date.h"
#include"Person.h"

using namespace std;

class Customer : public Person
{
public:

     Customer(string, string, Date , string);
     Customer();
     string getSIN() const;
      ~Customer( );
     virtual void print( );

private:
   string socialinsurancenumber;
};




#endif /* CUSTOMER_H_ */
