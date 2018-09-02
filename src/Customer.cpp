/*
 * Customer.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: kaveh
 */
#include<iostream>
#include<string>
#include"Customer.h"
#include"Person.h"

using namespace std;

Customer::Customer(string first, string addres, Date dateofbirth, string SIN)
	:Person(first,addres, dateofbirth)
{
	socialinsurancenumber=SIN;
}

Customer::Customer()
	:Person()
{
	socialinsurancenumber="";
}


Customer::~Customer()
{

}

string Customer::getSIN( ) const
{
	return socialinsurancenumber;
}

void Customer::print()
{
	cout << "\nname: ";
	Person::getname();
	cout << "\nand his social insurance number is: " << socialinsurancenumber;
}
