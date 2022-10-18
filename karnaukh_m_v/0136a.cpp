#include <iostream>
#include <array>
 
int main()
{
    int n = 0;
    std::cin >> n;
    int x = 0;
    std::array<int, 100> arr = {0};
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        arr[x-1] = i + 1;
    }
    for (int i = 0; i < n; i += 1)
    {
        std::cout << arr[i] << " ";
    }
}
