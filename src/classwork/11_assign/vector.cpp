//vector.cpp
#include "vector.h"

using std::cout;

Vector::Vector(size_t sz)
	:size{sz}, nums{ new int[sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

Vector::Vector(const Vector & v)
	:size{v.size}, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}

//copy assignment
Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = v[i];
	}
	delete[] nums;
	nums = temp;
	size = v.size;

	return *this;
}

Vector::~Vector()
{
	//cout << "delete array...";
	delete[] nums;

}

Vector::Vector(Vector && v) // move constructor
	:size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;
}

Vector & Vector::operator=(Vector && v)// move assignment
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
}