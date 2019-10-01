#include "vec.h"
#include <string>

//can you using so you dont have to use std::vector in the code below

int main() 
{
	loop_vector_w_index();
	std::vector<int> result = ret_vec_int();
	std::vector<int> nums(9, 1); // = { 99,55,1,3,66 };
	std::vector<std::string> strs(9, "  ");  
	//initialize 9 values and two spaces

	loop_vector_w_index(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_const(nums);

	loop_vector_w_for_ranged(nums);

	return 0;
}