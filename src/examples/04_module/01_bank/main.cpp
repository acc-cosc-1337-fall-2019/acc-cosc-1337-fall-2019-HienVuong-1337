#include<iostream>
#include "checking_account.h"
#include "savings_account.h"

using std::cout;


int main()
{
	int num = 5;
	int & num_ref = num; //get the address of num
	std::cout << "Address: " << &num_ref << std::endl; //output address
	std::cout << "Value at above address: " << num_ref << std::endl; //output value at address of num

	int * val_ = &num_ref; //point to the address of num
	std::cout << "Address pointed to: " << val_ << std::endl; //get the address of num
	std::cout << "Value pointed to: " << *val_ << std::endl; //get the value pointed to by val_

	*val_ = 15; //get the address of num
	std::cout << "Address pointed to: " << val_ << std::endl; //get the address of num
	std::cout << "Value pointed to: " << *val_ << std::endl; //get the value pointed to by val_

	return 0;
}