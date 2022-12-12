#include "VectorLib.hpp"
#include <iostream>
#include <cmath>

int main()
{
	vector a{ 1.1, 1.2 };
	vector b{ 1.2, 1.2 };

	double c = 0;
	c = Norm(b);
	std::cout << (a != b);
}