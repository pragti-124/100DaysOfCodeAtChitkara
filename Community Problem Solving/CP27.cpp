#include <iostream>//jai ganesh
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    if(k==0)/*---------we are moving the circular knob from 4 itself(k==0 means we are starting from 4 only). If number of rotations done by us are divisible by 4 then it means we again returned to the point from where we had started(that is 4). if rotations done by us are not divisible by 4 then it would be the point other than 4(that is 1,2,3) --------*/
	    {
	        if(n%4==0)
	        {
	            cout<<"off"<<endl;
	        }
	        else
	        {
	            cout<<"on"<<endl;
	        }
	    }
	    
	    else if(k==1)/*--------we are moving the circular knob from point other than 4(ie; 1,2,3). Here k==1 means we are starting from 1,2,3 which are places for on condition. If number of rotations done by us are divisible by 4 then it means we again returned to the point from where we had started (that is either 1,2,3). If rotations done by us are not divisible by 4 then it would be any point between from 1,2,3,4 (as we do not know what will be the remainder of rotations when we divide it by 4)---------- */
	    {
	        if(n%4==0)
	        {
	            cout<<"on"<<endl;
	        }
	        else
	        {
	            cout<<"Ambiguous"<<endl;
	        }
	    }
	    
	    t--;
	}
	return 0;
}
