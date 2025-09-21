#include <iostream>
using namespace std;

int main() {
    int asciiCode;
    cout << "Enter an ASCII code (0-127): ";
    cin >> asciiCode;

    cout << "The character for ASCII code " << asciiCode << " is: " << char(asciiCode) << endl;

    return 0;
}

