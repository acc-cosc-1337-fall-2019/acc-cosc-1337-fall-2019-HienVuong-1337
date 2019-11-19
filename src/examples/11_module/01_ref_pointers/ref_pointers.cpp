#include "ref_pointers.h"

//Shows that references and pointers can modify data pointed to
void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;
}

