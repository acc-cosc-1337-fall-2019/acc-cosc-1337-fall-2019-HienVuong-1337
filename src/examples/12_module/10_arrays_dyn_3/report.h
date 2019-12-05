#include "bank_account.h"
#include <iostream>

using std::cout;
//#include "examples/12_module/08_arrays_dyn_1/bank_account.h"

//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify
class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport(); //constructor

private:
	BankAccount** accounts; //creating a pointer to a pointer with **
	const int SIZE{ 5 };
};



//copied from report.cpp because of include error
MyReport::MyReport()
	:accounts{ new BankAccount*[SIZE] }//save 5 memory addresses	
{
	//creates dynamic memory (heap)

	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10); //calls default constructor
	}
}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i]; // deletes the pointer
	}

	delete[] accounts;
}
