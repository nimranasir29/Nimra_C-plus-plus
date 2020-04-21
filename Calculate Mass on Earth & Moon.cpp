#include <iostream>
using namespace std;
int main()
{
double mass=0, g=9.8, W_E,W_M;
int press, enter;
cout<<"This Program Is used to calculate weight on Earth & Moon\n\n";
a:
cout<<"Please enter the mass in Kgs: ";
cin>>mass;
cout<< "\n\n";
cout<<"To calculate weight on Earth press 1 and for Moon press 2 : ";
cin>>press;
cout<<"\n\n";
if (press==1)
{
W_E= mass*g;
cout<<"Weight of car on Earth: "<<W_E<<"N\n\n";}
else if (press==2)
{
W_M= mass*g/6;
cout<<"Weight of car on Moon: "<<W_M<<"N\n\n";
}
else {
cout<<"Please press a valid number\n\n";
}
cout<<"Do you want to calculate the weight of another car? [Press 1 for yes / 2 for No]: ";
cin>>enter;
cout<<"\n\n";
if (enter==1)
{
goto a;
}
else
return 0;
}







