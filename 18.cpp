#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	int middle;
	cout<<"enter the three numbers:";
	cin>>num1>>num2>>num3;
	if((num1>num2 and num1<num3) or(num1<num2 and num1>num3))
		cout<<num1<<"is second largest number";
	else if((num2>num1 and num2<num3) or (num2<num1 and num2>num3))
		cout<<num2<<"is second largest number";
	else 
		cout<<num3<<"is second largest number";
	return 0;
}
