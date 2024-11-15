#include <iostream>

using namespace std;

int main() {

    double Number_1;

    double Number_2;

    char Arithmetic_Operator;

    cout << "Please enter the first number: ";

    cin >> Number_1;

    cout << "Please enter the second number: ";

    cin >> Number_2;

    cout << "Please select an operator for the list given (+, -, *, /): ";

    cin >> Arithmetic_Operator;

    switch(Arithmetic_Operator) {
        case '+':
            cout << Number_1 << " + " << Number_2 << " = " << Number_1 + Number_2 << endl;
            break;

        case '-':
            cout << Number_1 << " - " << Number_2 << " = " << Number_1 - Number_2 << endl;
            break;
            
        case '*':
            cout << Number_1 << " * " << Number_2 << " = " << Number_1 * Number_2 << endl;
            break;

        case '/':
        
            if (Number_2 != 0) {

                cout << Number_1 << " / " << Number_2 << " = " << Number_1 / Number_2 << endl;

            } else {
                cout << "You can not divide the number on 0." << endl;
            }

            break;

        default:
            cout << "Please enter a valid operator for the list given above." << endl;
    }

    return 0;
}
