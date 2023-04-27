#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
    {
	    string A,B;
	    cin >> A >> B;
	    int yesno = 0;
	    for (int i=0;i<A.length();i++){
	        if (B.find(A[i])!=-1){
	            yesno=1;
	            break;
	        }
	    }
	    if (yesno==1) 
            cout << "Yes" << endl;
	    else 
            cout << "No" << endl;
	}
	return 0;
}
