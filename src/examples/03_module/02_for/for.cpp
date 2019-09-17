#include "for.h"
#include<iostream>

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/

void display_numbers(int num)
{
	for (int i = 1; i <= num; ++i) //no ; on for loop header
	{
		std::cout << i << "\n"; 
		//include <iostream> is in the cpp file but not header file and since we
		//are only using it here, use the format namespace::cout	
	}
}
