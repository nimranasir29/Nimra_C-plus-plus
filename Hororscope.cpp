#include <iostream>
using namespace std;
int main()
{
    int month, day;
    char ans, space; 
      do
    {
        cout << "Please Enter the Month of your Birthday Follow by the Day(ex. 12/01): \n";
        cin >> month >> space >> day ; 
       
	   if((month == 3 && day >= 21)||(month==4 && day <= 19))
           {
              cout << "You Are an Aries! \n";
             
           }
        else if((month == 4 && day >= 20)||(month==4 && day <= 20))
           {
              cout << "You Are an Taurus! \n";
               
           }
        else if((month == 5 && day >= 21)||(month==6 && day <= 21))
           {
              cout << "You Are an Gemini! \n";
              
           }
        else if((month == 6 && day >= 22)||(month==7 && day <= 22))
           {
              cout << "You Are an Cancer! \n";
               
           }
        else if((month == 7&& day >= 23)||(month==8 && day <= 22))
           {
              cout << "You Are an Leo! \n";
               
           }
            else if((month == 8&& day >= 23)||(month==9 && day <= 22))
           {
              cout << "You Are an Virgo! \n";
              
           }
        else if((month == 9&& day >= 23)||(month==10 && day <= 22))
           {
              cout << "You Are an Libra! \n";
               
           }
        else if((month == 10&& day >= 23)||(month==11 && day <= 21))
           {
              cout << "You Are an Scorpio! \n";
               
           }
        else if((month == 11&& day >= 22)||(month==12 && day <= 21))
           {
              cout << "You Are an Saggitarius! \n";
              
           }
        else if((month == 12&& day >= 22)||(month==1 && day <= 19))
           {
              cout << "You Are an Capricorn! \n";
              
           }
        else if((month == 1&& day >= 20)||(month==2 && day <= 18))
           {
              cout << "You Are an Aquarius! \n";
               
           }
        else if((month == 2&& day >= 19)||(month==3 && day <= 20))
           {
              cout << "You Are an Pisces! \n";
              
           }

        cout << "Would You life to Find Another Horoscope? (Please Type y or Y)\n ";
        cin >> ans;

    } while(ans == 'y' || ans == 'Y');

     cout << " Good Bye!\n";   
     
     return 0;

}
