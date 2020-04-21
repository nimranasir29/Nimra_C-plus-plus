#include <iostream>          //Program to Compute Sum of first 10 Even and First 10 Odd Numbers
using namespace std;
int main()
{ 
int sum_even,sum_odd,N,i;
//Initialize the sum of even and sum of odd numbers
    sum_even = 0;
    sum_odd = 0;
// Total of 20 numbers comprise of 10 odd and 10 even numbers
// But you change the value of N to anything if required
  N = 20;
//Compute the sum of even and sum of odd number
    for(i = 1;i<=N;i++)
    {
    if((i % 2) == 0)
    {
        sum_even = sum_even + i;
    }
    else
    {
        sum_odd = sum_odd + i;
    }
}
    cout << "Th sum of 10 evens are"       //Print the results now
    << "\t" << sum_even << endl;

    cout << "The sum of 10 odd are"
    <<"\t" << sum_odd << endl;
    return 0;
}
