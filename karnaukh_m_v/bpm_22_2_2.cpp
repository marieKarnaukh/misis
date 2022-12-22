#include <iostream>
#include <string>

int main()
{
	double x = 0;
	double y = 0;
	double correct = 0;
	double all = 0;
	while (std::cin.good())
	{
		std::cin >> x >> y;
		if (y - 2 + x * x <= 0 && y - x >= 0 && y + x >= 0)
		{
			correct += 1;
		}
		all += 1;
		//std::cout << correct << " " << all << "\n";
	}
	
	std::cout << (correct / (all-1)) << "\n";
}
