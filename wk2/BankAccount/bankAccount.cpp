
//****************************************************IMPLEMENTATION FILE BASE BANKACCOUNT

#pragma once

#ifndef BA_H
#define BA_H


#include "bankAccount.h"
//#include <string>
//#include <iostream>
#include <iomanip>





//DEFAULT CONSTRUCTOR

bankAccount::bankAccount()
	{
		accountNumber = 0;		
		balance = 0.0;
				
	};


//PARAMETERIZED CONSTRUCTOR**********************************************************
bankAccount::bankAccount(int userAccountNumber, double userAccountBalance)
{
	accountNumber = userAccountNumber;		
	balance = userAccountBalance;

};




//MODIFICATION MEMBER FUNCTIONS******************************************************

void bankAccount::deposit(double moneyIn)
{
	balance += moneyIn;

};



void bankAccount::withdraw(double moneyOut)
{
	balance -= moneyOut;

};



void bankAccount::setAccountNumber(int userAccountNumber)
{

	accountNumber = userAccountNumber;

};





//CONSTANT MEMBER FUNCTIONS**********************************************************




int bankAccount::getAccountNumber() const
{

	return accountNumber;

};

double bankAccount::getBalance() const
{

	return balance;

};

void bankAccount::print() const
{
	cout << fixed << showpoint;
	cout << setprecision(2)
		<< " Account number: " << accountNumber
		<< " Account Balance: " << balance
		<< endl << endl << endl;
			 
};

#endif // !BA_H