#include<iostream>
using namespace std;
int main()
{
	int  n=  5;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(i==0 or j==0 or i==4 or j==5)
			{
				cout<<"*";
	
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
