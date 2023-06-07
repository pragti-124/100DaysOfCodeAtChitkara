#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define lli long long int 
#define yes cout<<"YES"
#define no cout<<"NO"
#define pb push_back
#define cn cin>>n
void mysolution()
{
    lli i,j,k,l,m,n,x,y,z;
    lli c=0;
    string s;
    //cn;lli a[n+1];f(n)cin>>a[i];
    cin>>s;
    n=s.size();
    int fr[26]={0};
    for(i=0;i<n/2;i++)
    fr[s[i]-'a']++;
    for(i=(n/2+(n%2));i<n;i++)
    fr[s[i]-'a']--;
    for(i=0;i<26;i++)
    {
        if(fr[i]!=0)
        {
            no;
            return;
        }
    }
    yes;
}
int main()
{
    lli ttc;
    cin>>ttc;
    while(ttc--)
    {
       mysolution(); 
       cout<<endl;
    }
    return 0;
}
