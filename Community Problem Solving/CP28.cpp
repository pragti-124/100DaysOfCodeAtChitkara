#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for (int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int flag=1;
        for (auto i:mp)
        {
            if (i.second%2==1)
            {
                flag=0;
                break;
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
