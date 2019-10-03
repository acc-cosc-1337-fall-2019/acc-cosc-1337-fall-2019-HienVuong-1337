#include "bank_account.h"
#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main()
{
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



	
	return 0;
}