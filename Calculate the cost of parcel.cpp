#include<iostream>
using namespace std;
int main()
{
	double weight, totalcost, location;
	char choice;
	do{
	
	cout<<"Enter the weight of parcel: ";
	cin>>weight;
	nimra :
	cout<<"Please tell the location of a parcel for within the city press 1 and outside the city press 2: ";
	cin>>location;
	 if(location == 1){
	 	totalcost = weight * 2 + 20;
	 	cout<<"Total delivery cost of your parcel is "<<totalcost<<"$"<<endl;
	 	
	 }
	 else if(location == 2)
	 {
	 	totalcost = weight * 2 + 40;
	 	cout<<"Total delivery cost of your parcel is "<<totalcost<<"$"<<endl;
	 	
	 }
	 else{
	 	cout<<"Please enter the valid number"<<endl;
	 goto nimra;
	 }
	 cout<<"Do you want to calculate another totalcost of a parcel [Y/N] ?";
	 cin>>choice;
	 choice=toupper(choice);
}while( choice == 'Y' && choice!='N');

cout<<"Thank you!!!......"<<endl;
	return 0;
	
}
