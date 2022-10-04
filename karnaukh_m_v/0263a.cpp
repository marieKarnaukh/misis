#include <iostream>
using namespace std;
int main()
{
    int x = 0, a1=0, a2=0;
    for(int i=1; i<=5; i++)
        for(int k=1; k<=5; k++)
            {
                cin>>x;
                if(x==1)
                {
                    a1=i;
                    a2=k;
                }
            }
    cout<<((max(a1, 3)-min(a1, 3)) + (max(a2, 3) - min(a2, 3)));
}
