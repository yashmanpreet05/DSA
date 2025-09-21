#include<iostream>
using namespace std;
int main()
{
	float width,length,height,volume;
	cout << "Enter the length of the cuboid: ";
    cin >> length;
    cout << "Enter the width of the cuboid: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;
    volume = length * width * height;
	cout << "\nThe volume of the cuboid is: " << volume << endl;

    return 0;
}
	

