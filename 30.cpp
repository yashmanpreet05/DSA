#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b; 
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;  
    }

    int gcd = a;
    long long lcm = (1LL * x * y) / gcd;

    cout << "LCM = " << lcm;
    return 0;
}

