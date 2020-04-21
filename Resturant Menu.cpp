     #include<iostream>
     using namespace std;
     int main()
     { 
	int select,quantity;
	double price1,price2,price3, Price;
	char ans;
	cout<<"************************************************************************************************************************\n";
	cout<<"                                                          WELCOME To                                                    \n";
	cout<<"                                                       NIMRA FAST FOODS                                                 \n";
    cout<<"************************************************************************************************************************\n";	
    cout<<"***           Deal 01                   ***                 Deal 02               ***             Deal 03            ***\n";
    cout<<"***                                     ***                                       ***                                ***\n";
    cout<<"***     9 Pcs Hot & Crispy Chicken      ***     9 Pcs Chicken + 2 Coleslaws +     ***  2 Zingers + 2 Crunch Burgers  ***\n";
    cout<<"***                                     ***     1 Fries Bucket +  1.5L Drink      ***  + 4 Pcs Chicken + 2 Dinner    ***\n";
    cout<<"***                                     ***                                       ***   Rolls + 1.5L Drink           ***\n";
    cout<<"***         Rs. 1,150/-                 ***                RS. 1,575/-            ***            Rs. 1,595/          ***\n";
    cout<<"************************************************************************************************************************\n";
    do{
   
    cout<<"Please Select the Deals from Menu (ex. 1/2/3)\n";
    cin>>select;
    cout<<"Please enter the quantity?\n";
    cin>>quantity;
    
    switch(select)
    {
	
    case 1:
    	price1= 1150*quantity;	
    	break;
    	
    	case 2:
    		price2= 1575*quantity;
    		break;
    	
			case 3:
				price3= 1595*quantity;
    			break;
	
     }

      cout<<"Do you want to buy another deal? [Please type Y or y]\n";
       cin>>ans;

     }while (ans=='Y' || ans=='y');


       Price= price1+price2+price3;

	  cout<<"Total Price of your order: Rs. "<< Price<<"/-\n";
	
	  return 0;
     }
