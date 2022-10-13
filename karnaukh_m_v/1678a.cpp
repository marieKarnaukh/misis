#include <iostream>
#include <array>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    int x = 0;
    int k = 0;
    bool flag = false;
    std::array<int, 100> arr = {0};
    for (int i = 0; i < t; i += 1)
    {
        k = 0;
        flag = false;
        std::cin >> n;
        for (int h = 0; h < n; h += 1)
        {
            std::cin >> x;
            if (x == 0)
            {
                k += 1;
            }
            if (x != 0)
            {
                if (arr[x - 1] == 1)
                {
                    flag = true;
                }
                else arr[x - 1] += 1;
            }
            
        }
        for (int c = 0; c < 100; c++)
        {
            arr[c] = 0;
        }
      
        if (k != 0)
            std::cout << n - k << "\n";
        else if (flag == true)
        {
            std::cout << n << "\n";
        }
        else std::cout << n + 1 << "\n";
 
    }
}
