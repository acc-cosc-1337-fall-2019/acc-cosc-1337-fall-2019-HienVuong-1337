//atm.h
#include "bank_account.h"

class ATM
{
public:
	ATM();
	void display_balance() const;

private:
	BankAccount account;

};