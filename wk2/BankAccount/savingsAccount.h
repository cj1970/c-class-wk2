//SAVINGS ACCOUNT HEADER FILE


#pragma once

#ifndef SAVINGS_H
#define SAVINGS_H




#include <string>
#include <stdlib.h>
#include "bankAccount.h"
//using namespace std;







//DERIVED CLASS savingsAccount

class  savingsAccount : public bankAccount
{



public:


	//DEFAULT CONSTRUCTOR****************************************************************
	savingsAccount();


	//PARAMETERIZED CONSTRUCTOR**********************************************************
	savingsAccount(int, double);
	



//MODIFICATION MEMBER FUNCTIONS

	void setInterestRate(double);

	void withdraw(double);

	void deposit(double);


//CONSTANT MEMBER FUNCTIONS

	double getInterestRate() const;

	void postInterest();

	void print() const;

private:

	double interestRate = 0;

};


#endif

