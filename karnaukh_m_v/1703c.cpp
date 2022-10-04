#include <iostream>
#include <vector>
 
int main()
{
    int t = 0, n = 0, a = 0, sum=0, x=0;
    char b;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::vector <int> v;
        for (int h = 0; h < n; h++)
        {
            std::cin >> x;
            v.push_back(x);
        }
        for (int h = 0; h < n; h++)
        {
            sum = 0;
            std::cin >> a;
            for (int k = 0; k < a; k++)
            {
                std::cin >> b;
                if (b == 'D')
                    sum += 1;
                else sum -= 1;
            }
            v[h] += sum%10;
            if (v[h] >= 0)
                v[h] %= 10;
            else v[h] = 10 + v[h];
            
        }
        for (int h = 0; h < n; h++)
        {
            std::cout << v[h] << " ";
        }
        std::cout << std::endl;
    }
}
