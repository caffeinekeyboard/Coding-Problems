#include<bits/stdc++.h>
using namespace std;
int nearestSquareBelow(unsigned long long x)
{
    for(int i=x-1 ; i>0 ; i--)
    {
        unsigned long long ans = sqrt(i);
        if((ans*ans) == i)
        {
            return ans;
        }
        else
            continue;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long x;
        cin>>x;
        if(x==1)
        {
            cout<<-1;
        }
        else
        {
            unsigned long long i = nearestSquareBelow(x);
            cout<<i<<" "<<i<<" "<<(x-(i*i));
        }
        cout<<"\n";
    }
    return 0;
}
//REMAINS