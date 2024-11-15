#include <iostream>

using namespace std;

int main() {

    int Month;

    cout << "Please enter the month (1 to 12)\n";

    cin >> Month;

    switch (Month){
    case 12:
    case 1:
    case 2:
        cout << "it's winter's season.";
        break;

    case 3:
    case 4:
    case 5:
        cout << "it's spring's season.";
        break;

    case 6:
    case 7:
    case 8:
        cout << "it's summer's season.";
        break;

    case 9:
    case 10:
    case 11:
        cout << "it's autumn's season.";
        break;

    default:
        cout << "Enter a value from 1 to 12 please!";
    }

    return 0;
}