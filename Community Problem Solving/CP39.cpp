#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;


int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int a,b,ans=0;
        cin>>a>>b;
        if (a%3==0 || b%3==0)
        {
            cout<<0<<endl;
        }
        else if (a%3==b%3)
        {
            // if a%3=1 and b%3=1 then a=3*n +1,b=3*m +1,a=abs(a-b)=3*n+1-3*m-1=3*(n-m), one case
            cout<<1<<endl;
        }
        else
        {
            // if a%3=2 and b%3=1,  a=3*n +2,b=3*m +1, b=abs(a-b)=3*n+2-3*m-1=3*(n-m)+1 one case, now b=3*m +1 and a=3*n +1, same as above case, second case
            // total 2 cases
            cout<<2<<endl;
        }
        
        
        
    }
}

