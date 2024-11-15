#include <iostream>

using namespace std;

int main() {

    char Traffic_light;

    cout << "Please enter the traffic light from this list: (R (red), G (green), Y (yellow) ): ";

    cin >> Traffic_light;

    switch (Traffic_light) {
    case 'R':
        cout << "Stop the Car!";
        break;

    case 'G':
        cout << "Move the Car!";
        break;

    case 'Y':
        cout << "Slow down! or Be ready!";
        break;

    default:
        cout << "Enter a right value.";
    }

    return 0;
}