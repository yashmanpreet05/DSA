#include<iostream>
using namespace std;
int main()
{
	int days;
	cout<<"enter the number of day:";
	cin>>days;
	if(days==1)
		cout<<"sunday!!";
	else if(days == 2)
		cout<<"monday!!";
	else if(days == 3)
		cout<<"tuesday!!";
	else if(days == 4)
		cout<<"wednesday!!";
	else if(days ==5)
		cout<<"thrusday!!";
	else if(days ==6)
		cout<<"friday!!";
	else if(days == 7)
		cout<<"saturday!!";
	else
		cout<<"plese enter between 1-7 numbers ";
	return 0;	
}
