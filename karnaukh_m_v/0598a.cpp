#include <iostream>
int main()
{
    long long int t = 0, n=0, c=1, sum=0;
    std::cin>>t;
    for(int i=0; i<t; i++)
    {
        std::cin>>n;
        sum=0;
        c=1;
        sum += (1+n)*((double)n/2);
        while(c<=n)
        {
            sum -= 2*c;
            c *= 2;
        }
        std::cout<<sum<<std::endl;
    }
}
