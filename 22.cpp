#include<iostream>
using namespace std;
int main ()
{
	int n,sum=0;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=1;i<=n;i++)
		sum = i+sum;
	cout<<"sum of first "<<n<<" natural number is:"<<sum;
	return 0;
}
