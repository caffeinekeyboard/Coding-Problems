#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int K;
        int N;
        cin>>N>>K;
        int exp[N];
        for(int i=0 ; i<N ; i++)
        {
            cin>>exp[i];
        }
        int counter = 0;
        int i=0;
        bool cando = true;
        while(K>0)
        {
            K = K-(5000-exp[i]);
            counter++;
            if((i==(N-1))&&(K>0))
            {
                cout<<-1<<"\n";
                cando = false;
                break;
            }
            i++;
        }
        if(cando)
            cout<<counter<<"\n";
    }
    return 0;
}