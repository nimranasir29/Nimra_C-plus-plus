#include<iostream>
using namespace std;
     int main()
     {
     	int days, pop;    // pop= population
     	int n1=0, n3,i;
     	char choice;
     	do
     	{
     	cout<<"Please enter initial population growth of green curd in pounds: "<<endl;
     	cin>>pop;
     	cout<<"Please enter the days: "<<endl;
     	cin>>days;
     		 
     	if (days<=4)
     		cout<<"Green curd population remains same"<<endl;
     		else
     		{
     			for (i=4;i<=days;i+=4)
     			{                      // our variables  : n1  pop  n3
     				n3=n1+pop;         //fibonacci series: 0    1   1   2  3   5   8   13   21   34...........
     				                   //our series      : 0    0   0   0  4   0   0   0    8   0 0 0 12 0 0 0 20 0 0 0 32...... 
     				                   //                  depends on days  but increment in population
     				                   //                 :0    4   8   12  20  32...........
     				n1=pop;
     				pop=n3;
				 }
     			cout<<"Population of curd: "<<n3<<endl;	
			 }
			 cout<<"Do you want to calculate the population of curd on another day? [Y or N]"<<endl;
			 cin>> choice;
			 choice=toupper(choice);
			 
		}while(choice=='Y' && choice!='N');
     		
     		cout<<"Thank You!!!...."<<endl;
	return 0;	 
	 }
	
