//write include statements
#include<iostream>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main() 
{
	string dna;
	auto menu_option = 0;
	auto user_choice = 'y';

	do
	{
		cout << "Enter 1 for Get GC Content, or 2 for Get DNA Complement: ";
		cin >> menu_option;

		if (menu_option == 1)
		{
			cout << "Enter DNA string: ";
			cin >> dna;
			cout << "GC Content: " << get_gc_content(dna) << "\n";

		}
		else if (menu_option == 2)
		{
			cout << "Enter DNA string: ";
			cin >> dna;
			cout << "DNA Complement: " << get_dna_complement(dna) << "\n";
		}
		else
		{
			cout << "Invalid option, please try again";
		}

		cout << "Continue? (y/n): ";
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	return 0;
}
