#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    cin>>x;
    for(int i = x+1; i<9999; i++)
    {
        int a1 = i%10;
        int a2 = (i%100)/10;
        int a3 = (i%1000)/100;
        int a4 = i/1000;
        bool flag = true;
        flag *= (a1!=a2);
        flag *= (a1!=a3);
        flag *= (a1!=a4);
        flag *= (a2!=a3);
        flag *= (a2!=a4);
        flag *= (a3!=a4);
        if(flag)
        {
            cout<<i<<endl;
            break;
        }
    }
}
