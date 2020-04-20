#include<iostream>
using namespace std;
int main()
{
	int sq_even[20], cub_even[20], N, i;
	N=20;
	
	for(i = 1; i<=N; i++)
	{
		if((i % 2)== 0)
		{
			sq_even[i]= i*i;
			cub_even[i]= i*i*i;
			
		}
	}
	for(i=2; i<=N; i=i+2)
	cout<<"The Square & Cube of "<<i<<" is: "<<sq_even[i]<<" and "<<cub_even[i]<<"respectively."<<endl;
	return 0;
}
