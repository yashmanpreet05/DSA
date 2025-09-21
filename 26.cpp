#include<iostream>
using namespace std;
int main()
{
	int n, sum =0;
	int a;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a= i*i*i;
		sum += a ;
	}
	cout<<"sum of the cube of first "<<n<<"natural numbersis:"<<sum;
	return 0;
	  
	
}
