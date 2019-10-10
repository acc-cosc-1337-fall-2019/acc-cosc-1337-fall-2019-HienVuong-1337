//bank_account.h
#include<iostream>

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
	int get_balance() const; //const makes class members read only
	friend void display(const BankAccount& account); 
	//defining friend fn that returns nothing, using a reference to class BankAccount
	//friend fn has to be declared in class but it is not part of the class
	friend std::ostream & operator <<(std::ostream & out,
		const BankAccount& b);
	friend std::istream & operator >> (std::istream & in, 
		BankAccount & b);



//encapsulation with private (hide)
private:
	int balance;
	
};

#endif 

//free function means it is not a child of the class