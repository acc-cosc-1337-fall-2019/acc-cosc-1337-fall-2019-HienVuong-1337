#include "arrays_dyn_ch.h"
#include <iostream>

using std::cout;
using std::cin;

void dynamic_char_array()
{
	const int SIZE = 10;
	char* name = new char[SIZE];
	cout << "Enter name: ";
	cin.getline(name, SIZE);

	cout << name << "\n";

	delete[] name;
	name = nullptr;

	char* name1 = new char[SIZE];
	name1[0] = 'j';
	name1[1] = 'o';
	name1[2] = 'e';
	name1[3] = '\0'; //terminate the char array
	cout << "name1" << "\n";

	delete[] name1;
	name1 = nullptr;

	char* name2 = new char[SIZE]();
	name2[0] = 'j';
	name2[1] = 'o';
	name2[1] = 'h';
	name2[2] = 'n';
	
	delete[] name2;
	name2 = nullptr;


}
