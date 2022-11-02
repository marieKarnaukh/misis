#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    int n = 0;
    std::cin >> n;
    std::vector <int> v;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int h = 1;
    for (int i = 0; i < n; i += 1)
    {
        if (v[i] >= h)
        {
            h += 1;
        }
    }
    std::cout << h-1 << "\n";
}
