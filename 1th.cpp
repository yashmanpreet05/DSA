#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	double avg;
	
	cout<<"enter the three numbers:";
	cin>>num1>>num2>>num3;
	
	cout<<"numbers are:"<<num1<<" "<<num2<<" "<<num3<<endl;
	avg = (num1+num2+num3)/3;
	
	cout<<"average of three is:"<<avg;
	
	return 0;
	
	
}
