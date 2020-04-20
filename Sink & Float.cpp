#include<iostream>
using namespace std;
int main ()
{	
float y = 62.4;//Constant given, float value
float w; //Variable weight, float value
float r; //Variable radius, float value
double V; //Variable Volume, double value
double Fb; //Variable Buoyant Force, double value
char answer; // Variable answer, char
do //"Do" since you will be doing this loop at least once
{
cout<< "Please enter weight of the object in lbs and press enter: " <<endl;//Prompts user to enter weight
cin>> w; // User enters weight
cout<< "Please enter radius of the object in feet and press enter: " << endl;//Prompts user to enter radius
cin >> r ; // User enters radius
V=(4*3.14*r*r*r)/3; //Calculates Volume
Fb = (V)*(y); //Calculates Buoyant Force
{
if (Fb >= w)//Determines if Fb is greater than or equal to w
{
cout << "This Sphere will float! :) " << endl; //Prints that the sphere floats
}
else //If Fb < w
{
cout << "This Sphere will sink! :( " << endl; // Prints that the sphere sinks
}
}
cout << "Calculate another buoyancy? (y/n) " << endl; //Asks if the user wants to calculate another buoyancy
cin >> answer; //User enters y/n or Y/N
} while ((answer == 'y' || answer == 'Y'));//Goes back to beginning of loop if user enters 'y' or 'Y
cout << "End of Testing!" << endl; //Prints end of testing
return 0; //Exits
}

