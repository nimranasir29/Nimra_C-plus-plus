#include <iostream>
using namespace std;
int main()
{
//variables
int pop_A, pop_B;
int year = 0; //counter variable
double growthrate_A, growthrate_B;
//Input
cout << "Enter the population of town A and town B: ";
cin >> pop_A >> pop_B;

cout << "Enter the growth rate town A and town B (growth rate B must be less than growth rate A): ";
cin >> growthrate_A >> growthrate_B;

//process
//error checking
while (pop_A >= pop_B)
{
cout << "Error: Population of Town A must be less than town B./n Please try again.";
cin >> pop_A;
}

//error checking
while (pop_A <= 0)
{
cout << "Error: Value must be greater than zero.\n Please try again.";
cin >> pop_A;
}

//error checking
while (pop_B <= 0)
{
cout << "Error: Value must be greater than zero. \n Please try again.";
cin >> pop_B;
}

//error checking
while (growthrate_A <= 0)
{
cout << "Error: Value must be greater than zero. \n Please try again.";
cin >> growthrate_A;
}

//error checking
while (growthrate_B <= 0)
{
cout << "Error: Value must be greater than zero. \n Please try again.";
cin >> growthrate_B;
}

//error checking
while (growthrate_A <= growthrate_B)
{
cout << "Error: The growth rate of town A must be greater than the growth rate of town B. \n Please try again.";
cin >> growthrate_A;
}

// calculating the new population by means of a while loop nested within an if-statement
if (growthrate_A > growthrate_B)
{


while (pop_A <= pop_B)
{
year += 1;

pop_A = ((growthrate_A / 100) * pop_A) + pop_A;
pop_B = ((growthrate_B / 100) * pop_B) + pop_B;
}
//output
cout << "The number of years it will take for town A population to be equal or greater the population of town B is: "
 << year << endl;
}
system("pause");
return 0;
}

