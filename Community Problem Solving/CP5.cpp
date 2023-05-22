#include <iostream>
using namespace std;

int main() {
	int t,i=1,x;
	cin>>t;
	while(i<t+1){
	    cin>>x;
	    if(x>98){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    i++;
	}
	return 0;
}
