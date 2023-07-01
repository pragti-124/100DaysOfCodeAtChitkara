#include <iostream>
using namespace std;
int main() {
	int n, i, a;
	cin>>n; //taking number of competitiors as test cases
	while(n--) {
	    int one=0; //initializing the problem solved counter
	    for (i=0; i<5; i++) {
	        cin>>a;
	        if (a==1) one++; //if it is 1, it is taken as solved
	    }
	    //as per number of problems solved, contestant is classified 
	    if (one==0) cout<<"Beginner";
	    else if (one==1) cout<<"Junior Developer";
	    else if (one==2) cout<<"Middle Developer";
	    else if (one==3) cout<<"Senior Developer";
	    else if (one==4) cout<<"Hacker";
	    else cout<<"Jeff Dean";
	    cout<<endl;
	}
	return 0;
}
