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
        int towers[N];
        map<int,int> data;
        for(int i=0 ; i<N ; i++)
        {
            cin>>towers[i];
            data[towers[i]]++;
        }
        int sum=0;
	    for(auto i : data){
	        sum =max(sum,(i.first+i.second-1));
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
