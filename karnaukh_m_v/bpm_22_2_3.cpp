#include <iostream>
#include <string>

int main()
{
	int n = 0;
	std::string s;
	std::string new_s = "";
	std::cin >> n;
	std::cin >> s;
	new_s += s[0];
	for (int i = 1; i < n; i += 1)
	{
		if (n % 2 != 0)
		{
			if (i % 2 != 0)
				new_s = s[i] + new_s;
			else new_s += s[i];
		}
		else {
			if (i % 2 == 0)
				new_s = s[i] + new_s;
			else new_s += s[i];
		}
	}
	std::cout << new_s << "\n";


}
