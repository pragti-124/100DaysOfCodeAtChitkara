#include<iostream>
using namespace std;
int main(){
    int t,i=1,x,y;
    cin>>t;
    while(i<t+1){
        cin>>x>>y;
        if(x>y*10){
          printf("YES\n");  
        }
        else{
            printf("NO\n");
        }
        i=i+1;
    }
}
