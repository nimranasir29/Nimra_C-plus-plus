#include<iostream>
using namespace std;

int main()
{
	double speed;
	double miles;
	double time;
	int hour,min;
	
	cout<< "Please enter the speed:";
	cin>>speed;
	
	cout<<"Please enter the total miles traveled:";
	cin>> miles;
	
	time=miles/speed;
	hour=time;
	
	min=(time-hour)*60;
	cout<< hour <<" hour and "<< min <<" minutes "<<endl;
}
