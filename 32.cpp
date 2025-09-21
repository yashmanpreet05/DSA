#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
	 if (n <= 0) {
        cout << "Invalid input! n must be positive.";
        return 0;
    }
    int a = 0, b = 1;

    if (n == 1) {
        cout << "Fibonacci term " << n << " = " << a;
    } 
    else if (n == 2) {
        cout << "Fibonacci term " << n << " = " << b;
    } 
    else {
        int f;
        for (int i = 3; i <= n; i++) {
            f = a + b;
            a = b;       
            b = f;
        }
        cout << "Fibonacci term " << n << " = " << b;
    }

    return 0;
}

