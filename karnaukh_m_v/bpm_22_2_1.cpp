#include <iostream>

int main()
{
	double sum_x = 1;
	double sum = 1;
	double eps = 0.0001;
	double sum_y = 1;
	double y = 1;
	for (double x = 0.1; 1-x>=0; x += 0.05)
	{
		sum_x = x;
		for (int i = 1; sum_x - eps >= 0; i += 1)
		{
			//std::cout << i << "\n";
			sum_x *= x * x * (2 * i + 1 - 2) / (2 * i + 1);
			if (i % 2 != 0)
			{
				sum_x = -sum_x;
			}
			sum += sum_x;
		}
		std::cout << x << "   " << sum << " " << y << "\n";
	}
}
