#include<bits/stdc++.h>
using namespace std;
int LCM(int x,int y)
{
    if(x>=y)
    {
        for(int i=x ; i<=(x*y) ; i++)
        {
            if((i%x == 0)&&(i%y == 0))
            {
                return i;
            }
        }
    }
    else if(y>x)
    {
        for(int i=y ; i<=(x*y) ; i++)
        {
            if((i%x == 0)&&(i%y == 0))
            {
                return i;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,a,b;
        cin>>N>>a>>b;
        vector<int> array;
        for(int i=0 ; i<N ; i++)
        {
            int element;
            cin>>element;
            array.push_back(element);
        }
        int lcm = LCM(a,b);
        bool flipflop = true;//true for alice, false for bob.
        for(int i=0 ; i<N ; i++)
        {
            if(array[i]%lcm == 0)
            {
                remove(array.begin() , array.end() , array[i]);
                flipflop = !flipflop;
            }
        }
    }
}