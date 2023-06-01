#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	 int test ;
     cin >> test;
    while (test--) {
        int n; 
        cin>>n;
         int maxcount=0;
        vector<int>ar(n);
        map<int,int>m;
        for(int i=0;i<n;i++) {
         cin>>ar[i];
         m[ar[i]]++;
        maxcount=max(m[ar[i]],maxcount);
        } 
        cout<<(n-maxcount)<<endl;
}
	return 0;
}
