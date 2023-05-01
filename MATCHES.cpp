#include<bits/stdc++.h>
using namespace std;
int matches(int &x)
{
    int map[] = {6,2,5,5,4,5,6,3,7,6};
    int ans = 0;
    while(x>0)
    {
        ans = ans + map[(x%10)];
        x/=10;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin>>A>>B;
        int x = A+B;
        cout<<matches(x)<<"\n";
    }
    return 0;
}