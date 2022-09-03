//IMPLEMENTATION FILE CHECKING BANKACCOUNT
//**********************************************************************


#ifndef CA_H
#define CA_H



#include "checkingAccount.h"
#include <string>
#include <iostream>
#include <iomanip>


	
//DEFAULT CONTRUCTOR****************************************************
/*
checkingAccount::checkingAccount() 
{
	interestRate = 0;

	minimumBalance = 0;

	serviceCharge = 0;


}
*/


//PARAMETERIZED CONSTRUCTOR*********************************************
checkingAccount::checkingAccount(int userAccountNumber, double userBalance) : bankAccount(userAccountNumber, userBalance)
{
	
	accountNumber = userAccountNumber;

	balance = userBalance;

	minimumBalance = 0;

	interestRate = 0.0;

	serviceCharge = 0.0;
	
};




////MODIFICATION MEMBER FUNCTIONS

void checkingAccount::setMinimumBalance(double userMinimumBalance)
{

	checkingAccount::minimumBalance = userMinimumBalance;

};


void checkingAccount::setInterestRate(double userInterestRate)
{

	interestRate = userInterestRate;

};

void checkingAccount::setServiceCharge(double userSetServiceCharge)
{

	serviceCharge = userSetServiceCharge;

};

void checkingAccount::withdraw(double withdrawAmount)
{

	//withdraw checks to make sure there is enough money in the account first and reports a warning if not.  
	
	if (( balance - withdrawAmount) < 0)
	{
		cout << "There is not enough money in the checking account." << endl;

		return;
	}
	else
	{
		//If there is enough money to make the withdraw, it then checks to see if the balance will go below the minimum amount after the withdraw. 
		
		if ( (balance - withdrawAmount) < checkingAccount::minimumBalance)
		{
			cout << "The withdrawal will go below the minimum balance allowed." << endl;

				//If so, it checks to see if the balance will go below zero after the withdraw and the service charge is applied.  
				//Should this occur an error is reported.  
				
				if ((balance - withdrawAmount) < 0)
				{
					
					cout << "There is not enough money in the checking account." << endl;
					cout << "A service charge will be applied to the checking account." << endl;
					
					balance -= serviceCharge;

					return;
				
				}
				else 
					//If not, the balance is adjusted to reflect the withdraw and the service charge applied.
					
					{
					
						balance -= withdrawAmount;
						balance -= serviceCharge;

						return;

					}
				
		}

	}

	//Fallthrough to withdraw from balance

	{
		balance -= withdrawAmount;

	}



};

void checkingAccount::writeCheck(double checkAmount)
//writeCheck calls withdraw
{
	
	checkingAccount::withdraw(checkAmount);

};


void checkingAccount::postInterest()
//postInterest takes the interest amount based off of the total balance and adds it to the balance (balance + balance * interestRate)
{

	balance += (balance * interestRate);


};



void checkingAccount::deposit(double moneyIn)
{
	balance += moneyIn;

};




//CONSTANT MEMBER FUNCTIONS

double checkingAccount::getMinimumBalance(int userAccountNumber) const
{

	return minimumBalance;

};

double checkingAccount::getInterestRate(int userAccountNumber) const
{

	return interestRate;


};

double checkingAccount::getServiceCharge(int userAccountNumber) const
{

	return serviceCharge;

};

	

	

	void checkingAccount::print() const
	{
	cout << fixed << showpoint;
	cout << setprecision(2)
		<< " Account number: " << accountNumber << endl
		<< " Account type: Checking" << endl  
		<< " Balance: " << balance << endl
		<< " Interest rate: " << interestRate << endl
		<< " Minimum Account Balance: " << minimumBalance << endl
		<< " Service charge: " << serviceCharge << endl <<endl << endl;
			 
	};

	


#endif // !CA_H



