#include<iostream>
using namespace std;
int main()
{
	float simple_interest, rate,principle,time;
	cout<<"enter the value of rate :";
	cin>>rate;
	cout<<"enter the value of principle:";
	cin>>principle;
	cout<<"enter the value of time:";
	cin>>time;
	simple_interest = (principle*rate*time)/100;
	cout<<"simple_interest is:"<<simple_interest;
	return 0;
	
}
