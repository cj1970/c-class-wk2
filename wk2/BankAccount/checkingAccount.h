//CHECKING ACCOUNT HEADER FILE

#pragma once

#ifndef CHECKING_H
#define CHECKING_H

//#include <string>
//#include <stdlib.h>
#include "bankAccount.h"
//using namespace std;	







//DERIVED CLASS checkingAccout

class  checkingAccount : public bankAccount
{

	

public:
    
	


	//DEFAULT CONSTRUCTOR****************************************************************
   // checkingAccount();

		
	//PARAMETERIZED CONSTRUCTOR**********************************************************
	
	checkingAccount(int, double);

	

//MODIFICATION MEMBER FUNCTIONS

	void setMinimumBalance(double);

	void setInterestRate(double);

	void setServiceCharge(double);

	void withdraw(double);

	void writeCheck(double);
	
	void postInterest();
	
	void deposit(double);

//CONSTANT MEMBER FUNCTIONS

	double getMinimumBalance(int) const;
	
	double getInterestRate(int) const;

	double getServiceCharge(int) const;

	

	void print() const;
	
private:

	double interestRate = 0;

	double minimumBalance = 0;

	double serviceCharge =0;


};


#endif