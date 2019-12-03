#include "arrays_mem.h"
#include <iostream>

using std::cout;

//write code for for stack_array and display each element to screen

void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE] = { 5, 10, 30, 20, 7 };
	hours[0] = 50; //access and modify

	//iterate an array
	for (int i = 0; i < SIZE; ++i)
	{
		cout << hours[i] << "\n";
	}

	cout << "\n";

	//iterate with for ranged
	for (auto hour : hours)
	//for (auto& hour : hours) //need to use a & to modify original and not copy
	{
		cout << hour << "\n";
	}
	
	cout << "\n";

	//pointer to first hours array element
	int* first_element = hours;
	cout << "first element: " << *first_element << "\n";
	cout << "second element: " << *(first_element + 1) << "\n";
	*first_element++;
	*first_element++;
	cout << "third element: " << *(first_element ++) << "\n";
	*first_element--;
	cout << "third element: " << *(first_element--) << "\n\n";

	cout << "\n";

	//iterate array with a pointer forward
	int* hours_ptr = hours;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *hours_ptr << "\n";
		hours_ptr++;
	}

	cout << "\n";

	//iterate array backwards
	for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		cout << *hours_ptr << "\n";
	}

	//passing an array to a function
}
