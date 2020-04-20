#include <iostream>
using namespace std;
int main()
{
   int height_feet;
   int height_in;
   int conv_1;
   
   cout << "What is your height rounded off in feet?" << endl;
   cin >> height_feet;
  
   cout << "What is the rest of your height in inches?" << endl;
   cin >> height_in;
  
   if (height_feet >= 5) {
       conv_1 = 110 + (height_in * 5);
       cout << "You weigh " << conv_1 << " in lbs." << endl;
   } else {
       cout << "You must weigh less than 110 lbs." << endl;
   }
   return 0;
}
