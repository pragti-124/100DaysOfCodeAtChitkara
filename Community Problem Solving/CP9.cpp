#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    int count = 0;
	    cin>>n;
	    while(n != 0){
	        int ld = n % 10;
	        if(ld == 4){
	            count++;
	        }
	        n = n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
