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
        ll n,i,c=0,mx=0;
        cin>>n;
        ll a[n];
        ll b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==0||b[i]==0)
            {
                if(mx<c)
                mx=c;
                c=0;
            }
            else
            c++;
        }
        if(mx<c)
        mx=c;
        cout<<mx<<endl;
    }
}
