#include <iostream>
using namespace std;

int main() {
	int t,i=1,b;
	cin>>t;
	while(i<t+1){
	    cin>>b;
	    if(b>=80){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    i++;
	}
	return 0;
}
