#include <iostream>
using namespace std;

int main() 
{
	int Test_Cases;
	cin>>Test_Cases;
	while(Test_Cases--)
    {
        int n,k,v;
        cin>>n>>k>>v;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int x=0;
            cin>>x;
            sum=sum+x;
        }
        int checker = ((v*(n+k))-sum);
        if(((checker%k)==0)&&(checker>0))
            cout<<checker/k;
        else
            cout<<-1;
        cout<<"\n";
    }
}
