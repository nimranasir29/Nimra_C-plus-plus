#include<iostream>
using namespace std;
int main()
{   int n;
    char answer = ' ';
   Scary:
   	
     cout << "Please Enter the Year b/w 1000-3000 in Arabic you want converted: ";
     while(cin>>n)      // 4 digit number       1234
     {	
     int i,j,k,l;      //  l=  1000 place,  k= 100 place ,
               // j= 10 place ,  i= unit place  they are used to divide number into 4 parts
     l=(n/1000)*1000;      //n=1234   ,,,,,1000     
     
     if(l==1000)
          cout<<"M";
     if(l==2000)
          cout<<"MM";
     if(l==3000)
          cout<<"MMM";
          
     k=(n%1000);     //n=2234      234
     
     k=(k/100)*100;               // 234/100 =  2         2*100= 200
     
	 if (k == 100)
		 cout<<"C";
	else if (k == 200)
		 cout<<"CC";
	else if (k == 300)
		 cout<<"CCC";
	else if (k == 400)
		 cout<<"CD";
	else if (k ==500)
		 cout<<"D";
	else if (k == 600)
		 cout<<"DC";
	else if (k == 700)
		 cout<<"DCC";
	else if (k ==800)
		 cout<<"DCCC";
	else if (k == 900)
		 cout<<"CM";
		 
     k=n%1000;     //  234   
     l=k%100;      //   234%100=   34   
     
	 j=(l/10)*10;      //34/10=3 *10=30
	 
     if (j == 10)
		 cout<<"X";
	else if (j == 20)
		 cout<<"XX";
	else if (j == 30)
		 cout<<"XXX";
	else if (j == 40)
		 cout<<"XL";
	else if (j ==50)
		 cout<<"L";
	else if (j == 60)
		 cout<<"LX";
	else if (j == 70)
		 cout<<"LXX";
	else if (j ==80)
		 cout<<"LXXX";
	else if (j == 90)
		 cout<<"XC";
		 
     i=l%10;              //l= 34%10   4
     if (i == 1)
		 cout<<"I";
	else if (i == 2)
		 cout<<"II";
	else if (i == 3)
		 cout<<"III";
	else if (i == 4)
		 cout<<"IV";
	else if (i ==5)
		 cout<<"V";
	else if (i == 6)
		 cout<<"VI";
	else if (i == 7)
		 cout<<"VII";
	else if (i ==8)
		 cout<<"VIII";
	else if (i == 9)
		 cout<<"IX";
		 cout<<endl;

    cout <<"\nWould you like to try again?(Y/N): ";
    cin >> answer;
    answer = toupper(answer);

    if(answer == 'Y' && answer != 'N'){goto Scary;}
    
    else if(answer == 'N' && answer != 'Y'){return 0;}
     }
     return 0;
}
