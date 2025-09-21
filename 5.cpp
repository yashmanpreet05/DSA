#include<iostream>
using namespace std;
int main()
{
	float cpdozen,spdozen,cpperbanana,spperbanana,totalcp,totalsp,result;
	
	cout<<"enter the cost price per dozen banana:";
	cin>>cpdozen;
	cout<<"enter the selling price per dozen banana:";
	cin>>spdozen;
	cpperbanana  = cpdozen/12.0;
	spperbanana = spdozen/12.0;
	totalcp = cpperbanana*25;
	totalsp = spperbanana*25;
	result = totalsp-totalcp;
	if(result > 0)
		cout<<"your profit is:"<<result;
	else if(result < 0)
		cout<<"your loss is:"<<result;
	else
		cout<<"no profit,no loss";
		
	return 0;
	
}
