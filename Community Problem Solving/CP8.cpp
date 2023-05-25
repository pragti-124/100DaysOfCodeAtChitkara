#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    if((double)(pow(t1,2)/pow(r1,3))==(double)(pow(t2,2)/pow(r2,3)))
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	}
	return 0;
}
