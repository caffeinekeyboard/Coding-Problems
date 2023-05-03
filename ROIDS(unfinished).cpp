#include<bits/stdc++.h>
using namespace std;
double processor(int l , int n)
{
    double ans = 1;
    while(l>0)
    {
        ans = ans*float(l)/float(n);
        l--;
        n--;
    }
    return ans;
}
int main()
{
    int N;
    cin>>N;
    int map[N][2];
    for(int i=0 ; i<N ; i++)
    {
        cin>>map[i][0]>>map[i][1];
    }
    int arr[N];
    for(int i=0 ; i<N ; i++)
    {
        arr[i] = map[i][0];
    }
    sort(arr,(arr+N));
    int leastcount = 1;
    int i=0;
    int n=N;
    int prob = 1;
    while(i != N)
    {
        if(i==N-1)
            break;
        while(arr[i] = arr[i+1])//SIGSEGV imminent
        {
            leastcount++;
            i++;
        }
        prob = prob*processor(leastcount , n);
        prob = prob%1000000007;
        i++;
        n = n-leastcount;
    }
    cout<<prob<<"\n";
    return 0;
}