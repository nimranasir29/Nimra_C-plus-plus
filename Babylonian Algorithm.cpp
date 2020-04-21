#include <iostream>
using namespace std;
int main()
{
int n, count;
double answer_n, guess_c,guess_n,guess_a, r;
cout << "This program will compute the square root\n";
cout << "of a number using the Babylonian algorithm.\n";
cout << "Please enter a whole number and press the return key:\n";
cin >> n;  // 144
cout << "Please enter a 'guess' number to divide by:\n";
cin >> guess_c;  // 10

r = n/guess_c;            //144/10= 14.4
guess_n = (guess_c + r)/2;  //  (10+14.4)/2= 12.2     improved guess

for(count=0;count<5;count++)
{
r = n/guess_n;         //   144/12.2=             
guess_a = (guess_n + r)/2;   // 12.0016
if (guess_a <= (guess_a * 0.01) + guess_a)
answer_n = guess_a;
else
r = n/guess_a;
guess_n = (guess_a + r)/2;
}
cout << "The sqaure root of "<< n << " is " << answer_n;
cout << endl; 
return 0;
}
