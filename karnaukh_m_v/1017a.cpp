#include <iostream>
#include <vector>
 
int main()
{
    int n = 0;
    std::cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a >> b >> c >> d;
    int sum_t = 0;
    int sum = 0;
    sum_t = a + b + c + d;
    std::vector <int> v;
    for (int i = 1; i < n; i += 1)
    {
        std::cin >> a >> b >> c >> d;
        sum = a + b + c + d;
        v.push_back(sum);
    }
    int counter = 0;
    sort(v.begin(), v.end());
    for (int i = n-2; i >= 0; i -= 1)
    {
        if (v[i] > sum_t)
        {
            counter += 1;
        }
        else break;
    }
    std::cout << counter + 1 << "\n";
    
}
