#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age of person:";
	cin>>age;
	if(age>=0 && age<=10)
		cout<<"child";
	else if(age>=11 && age <= 17)
		cout<<"teanager";
	else if(age>=18 && age<=30)
		cout<<"adult";
	else if(age<30)
		cout<<"senior";
	else
		cout<<"invaild input!!";
	return 0;
	
}
