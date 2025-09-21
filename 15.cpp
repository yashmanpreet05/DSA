#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout<<"enter the first side:";
	cin>>num1;
	cout<<"enter the second side:";
	cin>>num2;
	cout<<"enter the third side :";
	cin>>num3;
	if(num1+num2>num3 && num2+num3>num1 && num3+num1>num2)
	{
		if(num1==num2 && num2 == num3)
		{
			cout<<"triangle is equilateral";
		}
		else if(num1==num2 or num2==num3 or num3== num1)
		{
			cout<<"triangle is isosceles";
			
		}
		else
		{
			cout<<"triangle is Scalene";
			
		}
	}
	else
	{
		cout<<"invalid sides";
	}
	return 0;
}
