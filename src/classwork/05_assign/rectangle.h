#include<iostream>

/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

namespace acc
{
	class Rectangle 
	{
	public:
		//initialize width and height to w and h. calcuate_area fn is in constructor
		//this is not default constructor
		Rectangle(int w, int h) : width(w), height(h) { calculate_area(); };
		int get_area() const;
		friend std::ostream & operator <<(std::ostream & out,
			const Rectangle& r);

	private:
		void calculate_area();
		int area;
		int width;
		int height;
	};
}
