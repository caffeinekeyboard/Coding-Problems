#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
      if(n==0)
      return 1;
    long long res = 1;
    for (long long i = 2; i <= n; i++)
        res = res * i;
    return res;
}
long long nCr(long long n, long long r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
long long main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        long long array[N];
        long long evens = 0;
        long long odds = 0;
        long long good = 0;
        for(long long i=0 ; i<N ; i++)
        {
            cin>>array[i];
            if(array[i]%2 == 0)
            {
                evens++;
            }
            else
            {
                odds++;
            }
        }
        long long A=0;
        for(long long i=evens ; i>=0 ; i--)
        {
            A = A + nCr(evens , i);
        }
        long long Bodds = 0;
        long long Bevens = 0;
        if(odds%2 == 0)
        {
            good = good+(1*(A-1));
            for(long long i=2 ; i<=odds ; i+=2)
            {
                Bevens = Bevens + nCr(odds , odds-i);
            }
            good = good+ (Bevens * A);
        }
        else
        {
            for(long long i=1 ; i<=odds ; i+=2)
            {
                Bodds = Bodds + nCr(odds , odds-i);
            }
            good = good+ (Bodds * A);
        }
        cout<<(good)%1000000007;
        cout<<"\n";
    }
}