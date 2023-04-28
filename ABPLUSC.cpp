#include<bits/stdc++.h>
using namespace std;
int nearestSquareBelow(unsigned long long x)
{
    for(int i=x ; i>0 ; i--)
    {
        unsigned long long ans = sqrt(i);
        if((ans*ans) == i)
        {
            return i;
        }
        else
            continue;
    }
    return 1;
}
int main()
{
    unsigned long long x;
    cin>>x;
    cout<<nearestSquareBelow(x);
    return 0;
}