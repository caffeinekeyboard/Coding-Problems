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
        string S;
        cin>>S;
        int a=0,b=0;
        bool server = true;
        for(int i=0 ; i<N ; i++)
        {
            if(S[i] == 65)
            {
                if(server)
                {
                    a++;
                }
                else
                {
                    server = true;
                }
            }
            if(S[i] == 66)
            {
                if(!server)
                {
                    b++;
                }
                else
                {
                    server = false;
                }
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}