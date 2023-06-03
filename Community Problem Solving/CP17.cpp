#include <bits/stdc++.h>

using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		string arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			int c1=count(arr[i].begin(),arr[i].end(),'F'),c2;
			c2=count(arr[i].begin(),arr[i].end(),'P');
			if(c1>=x || (c1==x-1 && c2>=y)) cout<<"1";
			else cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

