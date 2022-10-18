#include <iostream>
#include <cmath>

int main()
{
    int t = 0, n = 0, m = 0, s1 = 0, s2 = 0, d=0;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> m >> s1 >> s2 >> d;
        if (abs(n - s1) + abs(m - s2) <= d)
            std::cout << -1 << std::endl;
        else if ((s1 + d >= n && s2 + d >= m) || (s1 - d <= 1 && s2 - d <= 1) || (s1 - d <= 1 && s1 + d >= n) || (s2 - d <= 1 && s2 + d >= m))
            std::cout << -1 << std::endl;
        else
        {
            std::cout << n + m - 2<<std::endl;
        }
    }
 }
