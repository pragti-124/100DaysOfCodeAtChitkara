#include <iostream>
using namespace std;

int main() {
	int t,n,i=1,x;
	cin>>t;
	while(i<t+1){
	    cin>>n>>x;
	    if(x%n==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    i++;
	}
	return 0;
}
