#include "bank_account.h"
#include <iostream>

using std::cout;

int main()
{
	BankAccount account;
	account.deposit(5);
	//would not be able to cout balance without adding a public function
	cout << account.get_balance();
	
	return 0;
}