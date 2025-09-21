#include<iostream>
using namespace std;
int main()
{
	double temp, converted;
	char choice;
	cout<<"enter the choice in which you want to convert:";
	cout << "F - Fahrenheit to Celsius\n";
    cout << "C - Celsius to Fahrenheit\n";
    cout << "Enter your choice (F/C): ";
    cin>>choice;
    if(choice == 'F' or choice =='f')
    {
    	cout<<"enter the temperature in fahrenheit:";
    	cin>>temp;
    	converted = (temp-32)*5.0/9.0;
    	cout<<"temp in celsius :"<<converted<<"Celsius";
	}
	else if(choice == 'C' or choice == 'c')
	{
		cout<<"enter the temperature in celsius:";
		cin>>temp;
		converted = (temp*9.0/5.0)+32;
		cout<<"temp in fahrenheit is:"<<converted<<"fahrenheit";
		
	}
	else
	{
		cout<<"invalid state";
	}
	return 0;
	
}
