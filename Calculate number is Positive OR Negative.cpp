#include<iostream>
using namespace std;
int main()
{
        double num;
        cout<<"Enter Number : ";
        cin>>num;
        if(num>0)
        {
                cout<<"\n Number is Positive \n";
        }
        else if(num<0)
        {
                cout<<"\n Number is Negative \n";
        }
        else
        {
                cout<<"\n Zero \n";
        }
        return 0;
}
