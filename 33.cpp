#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (N): ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input! N must be positive.";
        return 0;
    }
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";   
        int next = a + b;   
        a = b;             
        b = next;
    }

    return 0;
}

