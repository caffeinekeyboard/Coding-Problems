#include<bits/stdc++.h>
using namespace std;
int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}
int processor(int l , int n)
{
    long ans = 1;
    while(l>0)
    {
        
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
    int arr[N+1];
    for(int i=0 ; i<N ; i++)
    {
        arr[i] = map[i][0];
    }
    sort(arr,(arr+N));
    int leastcount = 1;
    int i=0;
    int n=N;
    double prob = 1.0;
    while(i != N)
    {
        if(i==N-1)
            break;
        while(arr[i] == arr[i+1])//SIGSEGV imminent
        {
            leastcount++;
            i++;
        }
        prob = prob*processor(leastcount , n);
        i++;
        n = n-leastcount;
    }
    cout<<prob<<"\n";
    return 0;
}
