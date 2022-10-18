#include <iostream>
 
int main()
{
    int n = 0;
    int k = 0;
    int x = 0;
    int m = 0;
        std::cin >> n >> k;
        m = k;
        for (int q = 0; q < n; q++)
        {
            std::cin >> x;
            if (k % x == 0)
            {
                if (k / x <= m)
                    m = k / x;
 
            }
        }
        std::cout << m << "\n";
}
