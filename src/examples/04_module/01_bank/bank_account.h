//bank_account.h

//defining a class will include keyword class, name of class, {} and ;

class BankAccount
{
public:
	BankAccount(); //constructor  
	void deposit(int amount);
	int get_balance(); //need to create function to call balance because it is protected

//encapsulation with private (hide)
private:
	int balance;
	
};