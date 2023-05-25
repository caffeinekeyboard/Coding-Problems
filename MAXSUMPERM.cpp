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
        int greatdiff = 0;
        int greatdiffbegin = 0;
        int greatdiffend = 0;
        for(int i=0 ; i<Q ; i++)
        {
            int diff = matrix[i][1] - matrix[i][0];
            if(diff>greatdiff)
            {
                greatdiff = diff;
                greatdiffbegin = matrix[i][0];
                greatdiffend = matrix[i][1];
            }
        }
        sort(array.begin() , array.end());
        vector<int> greatelements;
        for(auto it = (array.end() - greatdiff) ; it<(array.end()) ; it++)
        {
            greatelements.push_back(*it);
        }
        for(int i=0 ; i<greatdiff ; i++)
        {
            array.pop_back();
        }
        array.insert((array.begin()+greatdiffbegin) , greatelements.begin() , greatelements.end());
        int X = 0;
        for(int i=0 ; i<Q ; i++)
        {
            for(auto it = (array.begin()+matrix[i][0]) ; it<(array.begin()+matrix[i][1]) ; i++)
            {
                X = X + (*it);
            }
        }
        cout<<X<<"\n";
        for(auto it = array.begin() ; it<array.end() ; it++)
        {
            cout<<(*it)<<" ";
        }
    }
    return 0;
}