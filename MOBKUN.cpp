#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    while(testCases--)
    {
        int N,M,K,X;
        cin>>N>>M>>K>>X;
        int i=1;
        bool yesno = false;
        while(i<100000)
        {
            if(((((i-1)*((K-1)*N + M))+(K-1)*N)<X)&&(X<(i*((K-1)*N+M))))
            {
                yesno = true;
                break;
            }
            else    yesno = false;
        }
        if(yesno) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}