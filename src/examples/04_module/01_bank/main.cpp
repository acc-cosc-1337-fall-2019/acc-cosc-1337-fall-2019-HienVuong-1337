#include<iostream>
#include<vector>
#include "checking_account.h"
#include "savings_account.h"


using std::cout;
using std::cin;
using std::vector;


int main()
{
	CheckingAccount a(1500);
	cout << a.get_balance();

	SavingsAccount savings(500);
	savings.add_interest();
	cout << savings;

	return 0;
}