//#include "bank_account.h"
//#include<vector>
#include<iostream>
#include<vector>
#include<atm.h>
#include "bank_account.h"

using std::cout;
using std::vector;

int main()
{
	//scan card and enter pin
	//get customer record from DB into a vector
	vector<BankAccount> accounts{ (500),BankAccount(600), BankAccount(1000) };
	ATM atm(accounts[0]);

	//BankAccount account(9000); //created bank account to pass account to ATM
	//ATM atm(account);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();


	//cout<<atm;

	/*
	BankAccount account;
	account.deposit(5);
	//would not be able to cout balance without adding a public function
	cout << account.get_balance();



	vector<BankAccount> accounts;
	BankAccount b1;
	accounts.push_back(b1); //creating an instance
	accounts.push_back(BankAccount(750)); 

	for (auto account : accounts) //iterate the vector, an account is an instance of accounts
	{
		cout << "Balance: " << account.get_balance() << "\n";
	}
	*/


	return 0;
}