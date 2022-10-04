#include <iostream>
int main()
{
    int n=0, k=0, f=0, t=0, a = -1e10;
    std::cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        std::cin>>f>>t;
        if(t>k)
            a = std::max(a, f-(t-k));
        else
            a = std::max(a, f);
    }
    std::cout<<a;
}
