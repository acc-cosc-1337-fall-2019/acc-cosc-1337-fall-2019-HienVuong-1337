//cpp
#include "arrays_char.h"

void stack_char_array()
{
	const int SIZE = 5;
	char name0[] = "John";
	cout << name0 << "\n";

	char name1[SIZE] = "Mary";
	name1[4] = '\0'; //terminate the string
	cout << name1 << "\n";

	for (int i = SIZE; name1[i] != '\0'; i++)
	{
		cout << name1[i];
	}
}
