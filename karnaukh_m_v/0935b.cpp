#include <iostream>
 
int main()
{
    int n = 0;
    char step;
    std::cin >> n;
    int x = 0;
    int y = 0;
    char flag = '0';
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> step;
        if (step == 'U')
        {
            y += 1;
        }
        else x += 1;
        
        if (flag == step)
        {
            k += 1;
        }
        flag = '0';
        if (x == y)
        {
            flag = step;
        }
    }
    std::cout << k << "\n";
}

