//IMPLEMENTATION FILE SAVINGS BANKACCOUNT

#ifndef SA_H
#define SA_H



#include "bankAccount.h"
#include "savingsAccount.h"
#include <string>
#include <iostream>
#include <iomanip>



//DEFAULT CONTRUCTOR****************************************************

savingsAccount::savingsAccount()
{
	interestRate = 0;
}

//PARAMETERIZED CONSTRUCTOR
savingsAccount::savingsAccount(int userAccountNumber, double userBalance) :bankAccount(userAccountNumber, userBalance)
{
	accountNumber = userAccountNumber;

	balance = userBalance;

	interestRate = 0;

};


//MODIFICATION MEMBER FUNCTIONS

void savingsAccount::setInterestRate(double userInterestRate)
{

	interestRate = userInterestRate;

};

void savingsAccount::withdraw(double withdrawAmount)

//Withdraw checks to make sure there is enough money before altering the balance.    

{
	//withdraw checks to make sure there is enough money in the account first and reports a warning if not.  

	if ((balance - withdrawAmount) < 0)
	{
		cout << "There is not enough money in the checking account." << endl;
	}
	else

	//If not, a warning message is printed and the balance remains unchanged.

		{
			balance -= withdrawAmount;

		}

}


void savingsAccount::deposit(double moneyIn)
{
	balance += moneyIn;

};



//CONSTANT MEMBER FUNCTIONS

double savingsAccount::getInterestRate() const
{

return interestRate;


}


void savingsAccount::postInterest()
	//postInterest takes the interest amount based off of the total balance and adds it to the balance (balance + balance * interestRate)
	{

	balance += balance * interestRate;


	}

void savingsAccount::print() const
	{

	cout << fixed << showpoint;
	cout << setprecision(2)
		<< " Account number: " << accountNumber << endl
		<< " Interest rate: " << interestRate << endl
		<< " Account Balance: " << balance << endl << endl << endl;
		
	};


#endif // !SA_H

	
