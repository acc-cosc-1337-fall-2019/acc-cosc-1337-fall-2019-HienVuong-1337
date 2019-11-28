#include "vector.h"

//Vector get_vector();

int main()
{
	Vector<double> v(1);
	v[0] = 2.5;

	std::cout << v[0];

	return 0;
}

//return by value, creates a copy
//Vector get_vector()
//{
//	Vector v(3);
//
//	return v;
//}