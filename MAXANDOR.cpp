#include<bits/stdc++.h>
using namespace std;
int functio(int x, int a, int b)
{
    int m = x|b;
    int n = x&a;
    int o = m-n;
    return o;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        int max=0;
        for(int i=0 ; i<pow(2,C) ; i++)
        {
            int j = functio(i , A , B);
            if(max < j)
            {
                max = j;
            }
        }
        int counter = 0;
        for(int i=0 ; i<pow(2,C) ; i++)
        {
            int j = functio(i , A , B);
            if(j == max)
            {
                counter++;
            }
        }
        cout<<counter<<"\n";
    }
    return 0;
}
//BRUTE FORCED TIME COMPLEXITY EXCEEDED