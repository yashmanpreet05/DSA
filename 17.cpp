#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;
    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << ":\n";

    for (int i = startYear; i <= endYear; i++) {
        if ((i% 4 == 0 && i % 100 != 0) or (i  % 400 == 0)) {
            cout<< i << " ";
        }
    }
    cout << endl;

    return 0;
}

