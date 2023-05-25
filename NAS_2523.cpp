#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        if(N%2==0)
        {
            while(N>0)
            {
                cout<<N<<" ";
                N--;
            }
            cout<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    return 0;
}