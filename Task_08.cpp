#include <iostream>

using namespace std;

int main() {

    int NUMBER1;
    
    cout << "Please enter a number from 1 to 9: ";

    cin >> NUMBER1;

    switch (NUMBER1) {
    case 0:
        cout << "Zero (0)";
        break;

    case 1:
        cout << "One(1)";
        break;

    case 2:
        cout << "Two(2)";
        break;

    case 3:
        cout << "Three(3)";
        break;

    case 4:
        cout << "Four(4)";
        break;

    case 5:
        cout << "Five(5)";
        break;

    case 6:
        cout << "Six(6)";
        break;

    case 7:
        cout << "Seven(7)";
        break;

    case 8:
        cout << "Eight(8)";
        break;

    case 9:
        cout << "Nine(9)";
        break;

    default:
        cout << "Please enter a valid number. ";
    }

    return 0;
}