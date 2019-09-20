#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade) * credit_hours;
	sum_credit_hours += credit_hours;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;


	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "GPA: " << gpa;

	/*homework: prompt user for numerical grade and if number is between 0 and 100, 
	call both get_letter_grade_using_if and get_letter_grade_using_switch functions 
	to display letter grade to screen, otherwise display number out of range*/

	int grade;

	cout << "Enter numerical grade: ";
	cin >> grade;
	if (grade > 0 && grade <= 100)
	{
		cout << "Grade using if function: " << get_letter_grade_using_if << "\n";
		cout << "Grade using switch function: " << get_letter_grade_using_switch << "\n";
	}
	else
	{
		cout << grade << "is out of range" << "\n";
	}
	return 0;
}