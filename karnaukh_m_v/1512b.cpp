#include <iostream>
#include <vector>

int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    char a;
    bool flag;
    std::vector<std::vector<int>> v;
    for (int i = 0; i < t; i += 1)
    {
        std::cin >> n;
        for(int x=0; x<n; x+=1)
            for (int y = 0; y < n; y++)
            {
                std::cin >> a;
                if (a == '*')
                {
                    std::vector <int> temp = {x, y};
                    v.push_back(temp);
                }
            }
        if (v[0][0] == v[1][0])
        {
            std::vector <int> temp = { (v[0][0] + 1) % n, v[0][1]};
            v.push_back(temp);
            std::vector <int> temp = { (v[0][0] + 1) % n, v[1][1]};
            v.push_back(temp);
        }
        else if (v[0][1] == v[1][1])
        {
            std::vector <int> temp = { v[0][0], (v[0][1] + 1) % n};
            v.push_back(temp);
            std::vector <int> temp = { v[1][0], (v[0][1] + 1) % n};
            v.push_back(temp);
        }
        else {
            std::vector <int> temp = { v[0][0], v[1][1]};
            v.push_back(temp);
            std::vector <int> temp = { v[1][0], v[0][1]};
            v.push_back(temp);
        }
        for (int x = 0; x < n; x += 1)
            for (int y = 0; y < n; y++)
            {
                flag = false;
                for (int q = 0; q < 4; q += 1)
                {
                    if (x == v[q][0] && y == v[q][1])
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == true)
                    std::cout << "*";
                else std::cout << ".";
            }
        v.clear();

    }
