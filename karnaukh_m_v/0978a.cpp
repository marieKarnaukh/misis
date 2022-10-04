#include <iostream>
#include <vector>
#include <array>
 
 
int main()
{
    int n = 0, x = 0;
    std::cin >> n;
    std::array<int, 1000> a = {0};
    std::vector <int> v;
    std::vector <int> v1;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }
    for (int i = (int)v.size() - 1; i >= 0; i--)
    {
        if (a[v[i] - 1] == 0)
        {
            v1.push_back(v[i]);
            a[v[i] - 1] = 1;
        }
    }
    std::cout << v1.size() << std::endl;
    for (int i = (int)v1.size() - 1; i >= 0; i--)
        std::cout << v1[i] << " ";
}
