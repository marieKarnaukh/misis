#include <iostream>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    int x1 = 0;
    int x2 = 0;
    int h = 1;
    bool check;
    for (int i = 0; i < t; i++)
    {
        x1 = 0;
        h = 1;
        check = true;
        std::cin >> n;
        for (int q = 0; q < n; q++)
        {
            std::cin >> x2;
            if (x2 == 1)
            {
                if (x1 == 1)
                    h += 5;
                else h += 1;
            }
            else if (x1 == 0 && q!=0)
            {
                h = -1;
                check = false;
            }
            x1 = x2;
        }
        if (check)
            std::cout << h << "\n";
        else std::cout << "-1" << "\n";
    }
}
