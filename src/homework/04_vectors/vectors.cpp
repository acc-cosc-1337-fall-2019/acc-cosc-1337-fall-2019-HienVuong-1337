#include "vectors.h"
/*
Write a value return function get_max_from_vector with a const reference
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const vector<int>& numbers)
{
	int max_value = numbers[0];

	for (auto& temp_value : numbers)
	{
		if (temp_value > max_value)
		{
			max_value = temp_value;
		}
	}
	return max_value;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int number)
{
	if (number < 2) return false;
	if (number == 2) return true;
	if (number % 2 == 0) return false;
	for (int i = 3; (i*i) <= number; i += 2)
	{
		if (number % i == 0) return false;
	}
	return true;
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current
number is prime.
*/
vector<int> vector_of_primes(int integer_value)
{
	vector<int> prime_nums;
	int i;

	for (int i = 2; i < integer_value; ++i)
	{
		if (is_prime(i))
		{
			prime_nums.push_back(i);
		}

	}

	return prime_nums;
}

