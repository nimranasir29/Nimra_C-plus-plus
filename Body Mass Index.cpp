#include<iostream>
using namespace std;
int main()
{
	cout<<"Please enter your weight(in kilogram):";
	double weight;
	cin>> weight;
	
	cout<<"Please enter your height(in  meters):";
	double height;
	cin>> height;
	double BodyMassIndex = weight/(height*height);
	cout << "Your Body Mass Index (BMI) is"<<BodyMassIndex << endl;
	return 0;
}
