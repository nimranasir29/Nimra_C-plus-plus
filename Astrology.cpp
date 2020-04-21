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
              cout<<"You are compatible with Aries,Leo,Sagittarius.\n";
           }
        else if((month == 4 && day >= 20)||(month==4 && day <= 20))
           {
              cout << "You Are an Taurus! \n";
               cout<<"You are compatible with Taurus,Virgo,Capricon.\n";
           }
        else if((month == 5 && day >= 21)||(month==6 && day <= 21))
           {
              cout << "You Are an Gemini! \n";
               cout<<"You are compatible with Gemini,Libra,Aquarius.\n";
           }
        else if((month == 6 && day >= 22)||(month==7 && day <= 22))
           {
              cout << "You Are an Cancer! \n";
               cout<<"You are compatible with Leo,Sagittarius,Aries.\n";
           }
        else if((month == 7&& day >= 23)||(month==8 && day <= 22))
           {
              cout << "You Are an Leo! \n";
               cout<<"You are compatible with Cancer,Scorpio,Pisces.\n";
           }
            else if((month == 8&& day >= 23)||(month==9 && day <= 22))
           {
              cout << "You Are an Virgo! \n";
               cout<<"You are compatible with Virgo,Taurus,Capricon.\n";
           }
        else if((month == 9&& day >= 23)||(month==10 && day <= 22))
           {
              cout << "You Are an Libra! \n";
               cout<<"You are compatible with Libra,Gemini,Aquarius.\n";
           }
        else if((month == 10&& day >= 23)||(month==11 && day <= 21))
           {
              cout << "You Are an Scorpio! \n";
               cout<<"You are compatible with Scorpio,Cancer,Pisces.\n";
           }
        else if((month == 11&& day >= 22)||(month==12 && day <= 21))
           {
              cout << "You Are an Saggitarius! \n";
               cout<<"You are compatible with Sagittarius,Leo,Aries.\n";
           }
        else if((month == 12&& day >= 22)||(month==1 && day <= 19))
           {
              cout << "You Are an Capricorn! \n";
               cout<<"You are compatible with Capricon,Virgo,Taurus.\n";
           }
        else if((month == 1&& day >= 20)||(month==2 && day <= 18))
           {
              cout << "You Are an Aquarius! \n";
               cout<<"You are compatible with Aquarius,Libra,Gemini.\n";
           }
        else if((month == 2&& day >= 19)||(month==3 && day <= 20))
           {
              cout << "You Are an Pisces! \n";
               cout<<"You are compatible with Pisces,Scorpio,Cancer.\n";
           }

        cout << "Would You life to Find Another Horoscope? (Please Type y or Y)\n ";
        cin >> ans;

    } while(ans == 'y' || ans == 'Y');

     cout << " Good Bye!\n";   
     
     return 0;

}
