#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,Q;
        cin>>N>>Q;
        vector<int> array;
        for(int i=0 ; i<N ; i++)
        {
            int n;
            cin>>n;
            array.push_back(n);
        }
        int matrix[Q][2];
        for(int i=0 ; i<Q ; i++)
        {
            int beginindex;
            int endindex;
            cin>>beginindex>>endindex;
            matrix[i][0] = beginindex-1;
            matrix[i][1] = endindex;
        }
        int visitedarray[N] = {};
        for(int i=0 ; i<N ; i++)
        {
            for(int j=0 ; j<Q ; j++)
            {
                if((i>=matrix[j][0])&&(i<matrix[j][1]))
                {
                    visitedarray[i]++;
                }
            }
        }
        sort(array.begin() , array.end());
        vector<int> ansarray (N,0);
        for(int j=0 ; j<N ; j++)
        {
            int checker = -1;
            int checkerindex;
            for(int i=0 ; i<N ; i++)
            {
                if(visitedarray[i]>checker)
                {
                    checkerindex = i;
                }
            }
            *(ansarray.begin()+checkerindex) = *(array.rbegin());
            array.pop_back();
            visitedarray[checkerindex] = -1;
        }
        int X = 0;
        for(int i=0 ; i<Q ; i++)
        {
            for(auto it = (ansarray.begin()+matrix[i][0]) ; it<(ansarray.begin()+matrix[i][1]) ; it++)
            {
                X = X + (*it);
            }
        }
        cout<<X<<"\n";
        for(auto it = ansarray.begin() ; it<ansarray.end() ; it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<"\n";
    }
}    
//WORKS BUT TIME LIMIT EXCEDED.