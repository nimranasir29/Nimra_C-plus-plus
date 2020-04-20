#include <iostream> 
using namespace std;
int main()
{  
int mg; 
 cout << "How many milligrams of coffee in the drink?" << endl; 
  cin >> mg; 
   
    int numDrinks = 10000 / mg;
	 cout << "How many milligrams of coca cola in the drink?" << endl; 
  cin >> mg; 
    
    
     	int Drinks = 10000 / mg; 
    
	 cout << "coffee " <<numDrinks << " drinks." << endl;
	 
     cout<<"coca cola " << Drinks<< " drinks." << endl;


return 0;
}
