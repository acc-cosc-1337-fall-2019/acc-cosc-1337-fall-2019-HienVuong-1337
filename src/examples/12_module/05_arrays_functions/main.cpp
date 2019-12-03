#include "arr_functions.h"

int main() 
{
	const int SIZE = 5;
	//hours is a pointer to the first array element/address
	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	int* hours_ptr = hours;

	iterate_array(hours_ptr, SIZE);

	cout << "\n";

	iterate_array(hours, SIZE);

	int* numbers = new int[SIZE]; //allocate memory
	for (int i = 0; i < SIZE; ++i) //initialize data
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < SIZE; ++i) //process
	{
		cout << numbers[i] << "\n";

	}

	delete[] numbers;

	return 0;
}