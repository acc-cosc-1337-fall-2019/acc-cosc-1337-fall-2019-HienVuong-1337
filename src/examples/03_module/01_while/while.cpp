#include "while.h"
//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
	auto i = 0;		// auto selects the data type, you have to declare and initialize the variable
	auto sum = 0;

	while (i <= num)
	{
		sum = sum + i * i;
		++i;	// same as i = i + 1;
	}
	return sum;
}





//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/

// void function and not a return function so not able to create a test case because it does not return a value
void display(string str)
{
	auto i = 0;

	while (i < str.length())
	{
		std::cout << str[i] << "\n";
		++i;
	}
}

