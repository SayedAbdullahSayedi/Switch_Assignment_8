#include <iostream>

using namespace std;

int main() {

    int Entered_Day;

    cout << "Please enter a corresponding day of the week based on (1-7): ";

    cin >> Entered_Day;

    switch(Entered_Day) {
        case 1:
            cout << "(Monday)" << endl;
            break;

        case 2:
            cout << "(Tuesday)" << endl;
            break;

        case 3:
            cout << "(Wednesday)" << endl;
            break;

        case 4:
            cout << "(Thursday)" << endl;
            break;

        case 5:
            cout << "(Friday)" << endl;
            break;

        case 6:
            cout << "(Saturday)" << endl;
            break;

        case 7:
            cout << "(Sunday)" << endl;
            break;
            
        default:
            cout << "Wrong Value! please enter a number from 1 to 7." << endl;
    }

    return 0;
}
