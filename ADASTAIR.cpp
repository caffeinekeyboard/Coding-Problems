#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int stp[n+1];
        int ctr = 0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>stp[i];//SIGEGV imminent
        }
        stp[n] = 0;
        for(int i=0 ; i<n ; i++)
        {
            int x = stp[i+1] - stp[i];
            while(x>3)
            {
                ctr++;
                x = x-3;
            }
        }
        cout<<ctr;
        cout<<"\n";
    }
    return 0;
}
