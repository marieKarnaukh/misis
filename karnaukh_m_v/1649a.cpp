#include <iostream>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    int x1 = 0;
    int x2 = 0;
    int k = 0;
    int sum = 0;
    for (int i = 0; i < t; i += 1)
    {
        k = 0;
        sum = 0;
        std::cin >> n;
        std::cin >> x1;
        for (int h = 1; h <= n; h += 1)
        {
            
            if (h == n)
            {
                x2 = 0;
            }
            else std::cin >> x2;
            if (x2 == 0)
            {
                k++;
            }
            if (x1 == 0 && x2 == 1)
            {
                sum += k+1;
                k = 0;
            }
            x1 = x2;
        }
        std::cout << sum << "\n";
    }
}
