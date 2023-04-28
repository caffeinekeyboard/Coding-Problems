#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long x;
        unsigned long long y;
        cin>>x>>y;
        unsigned long long lhs = (x*x*x*x) + 4*(y*2);
        unsigned long long rhs = (4*(x*x)*y);
        if(lhs == rhs)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}
//INCORRECT