#include <iostream>
using namespace std;
int main( )
{
     int SECONDS= 60;
	 int MINUTES= 60;
     int HOUR= 24;
	 int totalSeconds;
     int hr, minutes, seconds;
	
     cout << "Enter total number of seconds: ";
     cin >> totalSeconds;
	
	 seconds = totalSeconds;
	
     minutes = seconds / SECONDS;
     seconds %= SECONDS;
    
     hr = minutes / MINUTES;
     minutes %= MINUTES;	
    
     hr %= HOUR;
    
     cout << totalSeconds << " seconds is ";
     cout << hr << " hours ";
     cout << minutes << " minutes ";
     cout << seconds << " seconds "<<endl;
     return 0;
}
