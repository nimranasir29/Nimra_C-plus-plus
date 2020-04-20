#include <iostream>  
using namespace std;  
int main()  
{  
  int n;  
  bool flag= true;
  cout << "Enter the Number to check Prime: ";  
  cin >> n;    
  for(int i = 2; i <= n; i++)  
  {  
      if(n % i == 0)  {
      	
      	
	   
          flag=false;  
          break;  
      }
}
	      
  if(flag==false && n>1)  {
  	cout << "Number is Prime."<<endl;
  }else {
  cout << "Number is not Prime."<<endl; 	
  }
  return 0;  
}  
