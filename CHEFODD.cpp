#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long N,K;
        cin>>N>>K;
        unsigned long long odds;
        unsigned long long Nby2 = N/2;
        if(N%2 == 0)
        {
            odds = Nby2;
        }
        else
        {
            odds = (Nby2)+1;
        }
        if(K>(Nby2))
        {
            cout<<"NO"<<"\n";
            continue;
        }
        unsigned long long oddsminusK = (odds - K);
        if(oddsminusK%2 == 0)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}