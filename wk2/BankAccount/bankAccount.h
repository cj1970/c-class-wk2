
//BASE CLASS DEFINITION
// bankAccount base class

#pragma once

#ifndef BANKACCOUNT_H
#define BANKAACOUNT_H

#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

class bankAccount
{

	

public:

	//DEFAULT CONSTRUCTOR****************************************************************
	bankAccount();


	//PARAMETERIZED CONSTRUCTOR**********************************************************
	bankAccount(int, double);
	

	//CONSTANT MEMBER FUNCTIONS

	int getAccountNumber() const;

	double getBalance() const;

	void print() const;


	//MODIFICATION MEMBER FUNCTIONS

	void setAccountNumber(int userAccountNumber);

	void deposit(double moneyIn);

	void withdraw(double moneyOut);


protected:

	
	double balance;

	int accountNumber;


};

	


#endif


