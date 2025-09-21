#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < 0) 
		a = -a;
    if (b < 0) 
		b = -b;
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;  
    }

    cout << "HCF = " << a;
    return 0;
}

