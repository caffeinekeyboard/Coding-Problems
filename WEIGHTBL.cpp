#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;
        int lowerbound = w1+(x1*M);
        int upperbound = w1+(x2*M);
        if((w2<=upperbound)&&(w2>=lowerbound))
            cout<<1;
        else 
            cout<<0;
        cout<<"\n";
    }
    return 0;
}