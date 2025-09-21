#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << num << " is NOT in the Fibonacci series.";
        return 0;
    }
    int a = 0, b = 1;
    if (num == 0 || num == 1) {
        cout << num << " is in the Fibonacci series.";
        return 0;
    }
    int fib = a + b;
    while (fib <= num) {
        if (fib == num) {
            cout << num << " is in the Fibonacci series.";
            return 0;
        }
        a = b;         
        b = fib;
        fib = a + b;  
    }
    cout << num << " is NOT in the Fibonacci series.";
    return 0;
}

