#include<iostream>
#include"vectors.h"

using std::cin;
using std::cout;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	auto menu_option = 0;
	auto user_option = 'y';

	//vector<int> vec_input_value;
	//vector<int> element_count = vec_input_value.size();
	vector<int> vec_values = { 8, 4, 20, 88, 66, 99 };

	int number;
	vector<int> prime_result;

	do
	{
		cout << "Enter 1 for Get Max, 2 for Get Primes: ";
		cin >> menu_option;

		if (menu_option == 1)
		{
			cout << "Enter numbers to find max value: ";
			cout << "Max value from vector: " << get_max_from_vector(vec_values) << "\n";

			/*while (cin >> element_count)
			{
				vec_input_value.push_back(element_count);
			}*/
		
		}

		else if (menu_option == 2)
		{
			cout << "Enter a number to get primes up to that number: ";
			cin >> number;
			prime_result = vector_of_primes(number);
			cout << "Prime numbers for the integer entered: " << "\n";
			
			for (auto num : prime_result)
			{
				cout << num << " ";
			}
		}

		else
		{
			cout << "Invalid option, please try again" << "\n";
		}

		cout << "Continue? (y/n): ";
		cin >> user_option;

	} while (user_option == 'Y' || user_option == 'y');

	return 0;
}