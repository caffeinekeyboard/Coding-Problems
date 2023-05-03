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
        int arr[N];
        for(int i=0 ; i<N ; i++)
        {
            cin>>arr[i];
        }
        vector<int> unique;
        for(int i=0 ; i<N ; i++)
        {
            auto it = find(unique.begin(),unique.end(),arr[i]);
            if(it == unique.end())
            {
                unique.push_back(arr[i]);
            }
        }
        int unmat[unique.size()][2];
        for(int i=0 ; i<(unique.size()) ; i++)
        {
            unmat[i][1] = unique[i];
        }
        for(int i=0 ; i<(unique.size()) ; i++)
        {
            unmat[i][2] = 0;
        }
        for(int i=0 ; i<unique.size() ; i++)
        {
            for(int j=0 ; j<N ; j++)
            {
                if(unmat[i][1] == arr[j])
                {
                    unmat[i][2]++;
                }
            }
        }
        int maxcount = 0;
        for(int i=0 ; i<unique.size() ; i++)
        {
            if(unmat[i][2]>maxcount)
            {
                maxcount = unmat[i][2];
            }
        }
        cout<<(N-maxcount)<<"\n";
    }
    return 0;
}