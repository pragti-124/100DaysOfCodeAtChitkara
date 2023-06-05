#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,c=0;
        cin>>n;
        ll a[n];
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto i:m)
        {
            if(i.second%2!=0)
            c++;
        }
        if(c==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
