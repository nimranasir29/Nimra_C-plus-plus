#include <iostream>
using namespace std;
int main()
{
	int hours,minutes, min;
	double cost;
	char first, second,colon,ans;
	do
	{
		cout<<"Please enter the time in 24-hour notation.( ex. 13:30)\n";
		cin>>hours>>colon>>minutes;
		cout<<"How long did the call lasts in minutes?\n";
		cin>>min;
		cout<<"Please enter the first two letters of the day of the call.(ex. MO/Mo/mO/mo)\n";
		cin>>first>>second;
		
	if(((first=='M') || (first=='m' )) && (( second=='O') || (second=='o' )))
	
	{
	    if ((hours>=8 && minutes>=0)  || (hours<=18 && minutes<=0))
	    {
	        cost= min*0.40;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	        }
	        else
	        {
	            cost=min*0.25;
	            cout<<"Cost of your call is: "<<cost<<"$\n";
	            }
	    
	    }
	else if(((first=='T') || (first=='t' )) && (( second=='U') || (second=='u' )))
	
	{
	    if ((hours>=8 && minutes>=0)  || (hours<=18 && minutes<=0))
	    {
	        cost= min*0.40;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	        }
	        else
	        {
	            cost=min*0.25;
	            cout<<"Cost of your call is: "<<cost<<"$\n";
	
	    
	    
	    }
    }else if(((first=='W') || (first=='w' )) && (( second=='E') || (second=='e' )))
	
	{
	    if ((hours>=8 && minutes>=0)  || (hours<=18 && minutes<=0))
	    {
	        cost= min*0.40;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	        }
	        else
	        {
	            cost=min*0.25;
	            cout<<"Cost of your call is: "<<cost<<"$\n";
	            }
	    
	    
	    } 	  
    else if(((first=='T') || (first=='t' )) && (( second=='H') || (second=='h' )))
	
	{
	    if ((hours>=8 && minutes>=0)  || (hours<=18 && minutes<=0))
	    {
	        cost= min*0.40;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	        }
	        else
	        {
	            cost=min*0.25;
	            cout<<"Cost of your call is: "<<cost<<"$\n";
	            }
	    
	    
	    }
    else if(((first=='F') || (first=='f' )) && (( second=='R') || (second=='r' )))
	
	{
	    if ((hours>=8 && minutes>=0)  || (hours<=18 && minutes<=0))
	    {
	        cost= min*0.40;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	        }
	        else
	        {
	            cost=min*0.25;
	            cout<<"Cost of your call is: "<<cost<<"$\n";
	            }
	    
	    
	    }
    else if  (((first=='S') || (first=='s' )) && (( second=='A') || (second=='a' )))
	
	{
	    
	        cost= min*0.15;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	    
	    
	    }
    else if  (((first=='S') || (first=='s' )) && (( second=='U') || (second=='u' )))
	
	{
	    
	        cost= min*0.15;
	        cout<<"Cost of your call is: "<<cost<<"$\n";
	    
	    
	    }
	    cout<<"Do you want to find the cost of another call? [Please type Y / y]\n";
	    cin>>ans;
	}while(ans=='Y' || ans=='y');
return 0;		
}
