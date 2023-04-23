#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Test_Cases;
    cin>>Test_Cases;
    while(Test_Cases--)
    {
        int infected = 1;
        int N;
        vector<int> cases;
        cin>>N;
        int arr[N];
        for(int i=0 ; i<N ; i++)
        {
            cin>>arr[i];
        }
        int current = 0;
        while(current<N)
        {
            if((arr[current+1] - arr[current])<=2)
            {
                infected++;
                current = current+1;
            }
            else
            {
                current = current+1;
                cases.push_back(infected);
                infected=1;
            }
        }
        cout<<*min_element(cases.begin(), cases.end())<<" "<<*max_element(cases.begin(), cases.end());
        cout<<"\n";
    }
}
