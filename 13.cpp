#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"enter the score:";
	cin>>score;
	if(score<0 or score>100)
		cout<<"invalid score";
	else if(score>=90)
		cout<<"GRADE A";
	else if(score>=80 or score<90)
		cout<<"GRADE B";
	else if(score>=70 or score<80)
		cout<<"GRADE C";
	else if(score>=60 or score<70)
		cout<<"GRADE D";
	else if(score>=50 or score<60)
		cout<<"GRADE E";
	else if(score>=40 or score<50)
		cout<<"GRADE F";
	else cout<<"FAIL";
	return 0;
			
}
