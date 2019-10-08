//bank_account.h

//header guards to prevent class redefinition error
#ifndef BANK_ACCOUNT_H 
#define BANK_ACCOUNT_H



//defining a class will include keyword class, name of class, {} and ;

class BankAccount
{
public:
	BankAccount(); //constructor  
	BankAccount(int b) : balance(b) {}; //initialize parameter to b, inline constructor
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const; 
	//need to create fn to call balance because it is protected, const makes class members read only

//encapsulation with private (hide)
private:
	int balance;
	
};

#endif // !BANK_ACCOUNT.H