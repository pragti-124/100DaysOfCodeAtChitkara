#include <iostream>
using namespace std;
int main(){
	int t,i=1,a,b;
	cin>>t;
	while(i<t+1){
	    cin>>a>>b;
	    i++;
	    int investment_a,investment_b;
	    investment_a=a*10;
	    investment_b=b*5;
	    if(investment_a>investment_b){
	        cout<<"FIRST"<<endl;
	    }
	    else if(investment_a==investment_b){
	         cout<<"ANY"<<endl;
	    }else{
	        cout<<"SECOND"<<endl;
	}}
	return 0;
}
