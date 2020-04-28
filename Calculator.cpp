#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159265
int main()
{
   int choice;
double num1, num2,Factorial=1,x;
   double num,result;
   float sq,n;
   char ans;
 //displaying different options
 do{
 
   cout << "Please choose your option:"
           "\n1 = Addition"
           "\n2 = Subtraction"
           "\n3 = Multiplication"
           "\n4 = Division"
           "\n5 = Power"
           "\n6 = Factorial"
           "\n7 = Average"
           "\n8 = Log"
           "\n9 = Square root"
           "\n10 = cos of angles in degrees"
           "\n11 = exit"
           "\n\nChoice: ";
   cin >> choice;
 //while loop check whether the choice is in the given range
   while(choice < 1 || choice > 11)
   {
      cout << "\nPlease choose the above mentioned option."
              "\nChoice: ";
      cin >> choice;
   }

   switch (choice)
   {
      //Addition
      case 1:
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 + num2;
         cout << "Sum = " << x;
         break;
         
//Subtraction
      case 2:
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 - num2;
         cout << "Subtraction = " << x;
         break;
         
//Multiplication
      case 3:
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 * num2;
         cout << "Product = " << x;
         break;
         
 //Division
      case 4:
         cout << "Enter Dividend: ";
         cin >> num1;
         cout << "Enter Divisor: ";
         cin >> num2;
 //while loop checks for divisor whether it is zero or not
         while(num2 == 0)
         {
            cout << "\nDivisor cannot be zero."
                    "\nEnter divisor once again: ";
            cin >> num2;
         }
         x = num1 / num2;
         cout << "\nQuotient = " << x;
         break;
         
//Square
      case 5:
         cout << "Enter any number: \n";
         cin >> num1;
         cout << "Enter any power: \n";
         cin>> num2;
         x = pow(num1,num2);
         cout << "Square = " << x;
         break;
         
      //factorial   
          case 6:
      cout<<" Enter Number To Find Its Factorial:  ";
	cin>> num1;
	for (int a=1;a<=num1;a++) {
		Factorial=Factorial*a;
	}
	cout<<"Factorial of Given Number is ="<<Factorial<<endl;
	break;
//average	
	case 7:
		cout<<"Enter two number to find its average: ";
	cin>>num1>>num2;
	x = (num1+num2)/2;
	cout << "Average =" << x;

	break;
	//log
	case 8:
		cout<<"Enter any number: ";
		cin>>num;
	result = log (num);
	cout << "log(num) = " << result << endl;
	break;
///sqrt	
	case 9:
	cout<<"Enter a number: ";
	cin>>n;
	sq=sqrt(n);
	cout<<" square root of "<<n<<" is "<<sq;
	break;
	
	case 10:
		cout<<"Enter angle in degrees: ";
		cin>>num1;
	
		x = cos(num1*PI/180);
		cout<<"Cos of "<<num1<<" degrees is "<<x;
		break;
		
	
	case 11:	
	return 0;	

      default: cout << "\nError"<<endl;
   }
   cout<<"\nWant to calculate another operation: [please type Y or y]"<<endl;
   cin>>ans;
}
while ((ans =='Y') || (ans=='y'));
cout<<"Good Bye"<<endl;
}
