#include <iostream>

using namespace std;

int main() {

    char Marks_Grade;

    cout << "Please enter a letter from this list (A, B, C, D, F): ";

    cin >> Marks_Grade;

    switch (Marks_Grade) {
    case 'A':
        cout << "(100-90) Excellent Grades";
        break;

    case 'B':
        cout << "(90-80) Good Grades";
        break;

    case 'C':
        cout << "(80-70) Average Grades";
        break;

    case 'D':
        cout << "(70-60) Bad Grades";
        break;

    case 'F':
        cout << "(60-0) Unfortunately Failed";
        break;

    default:
        cout << "Invalid Character. Try again!";
    }

    return 0;
}