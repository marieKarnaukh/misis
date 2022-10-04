#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0, x = 0, k = 10, c = 1;
    vector <int> v;
    cin>>n;
    while(n)
    {
        cin>>x;
        c = 1;
        k = 10;
        while(x>=k)
        {
            if(x%k!=0)
            {
                c++;
                v.push_back(x%k);
                x = (x/k) * k;
            }
            k *= 10;
        }
        cout<<c<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<x<<endl;
        v.clear();
        n--;
    }
}
