#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');
        for (int j = 0; j < i; j++) {
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}

