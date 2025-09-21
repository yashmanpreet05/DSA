#include<iostream>
using namespace std;
int main()
{
	int month,year,days;
	cout<<"enter the month:";
	cin>>month;
	cout<<"enter the year:";
	cin>>year;
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8:
			case 10: case 12:
				days = 31;
				break;
		case 4: case 6: case 9: case 11:
				days = 30;
				break;
		case 2:
				if((year % 4 == 0 && year % 100 !=0) or( year % 400 == 0))
					days = 29;
				else 
					days = 28;
				break;
		default:
			cout<<"invalid month";	
				  		
	}
	 cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;
	return 0;
	
}
