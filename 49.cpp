#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		char ch = 'A';
		for(int j=1;j<=i+1;j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
