#include <iostream>

using namespace std;

int main() {

    double Bank_Balance = 0;

    double Deposited_Amount = 0;

    int Select_Option;

    do
    {
        cout << "Please choose an option: " << endl;

        cout << "1: Deposited Money... " << endl;

        cout << "2. Withdrawed Money... " << endl;

        cout << "3. Check your Balance... " << endl;

        cout << "4. Exit... " << endl;
        
        cin >> Select_Option;

        switch (Select_Option) {
        case 1:
            cout << "Please enter your deposited amount: ";

            cin >> Deposited_Amount;

            if (Deposited_Amount > 0) {

                Bank_Balance = Deposited_Amount + Bank_Balance;

                cout << "Your current balance is: " << Bank_Balance << endl;

            }

            else {
                cout << "Please enter a valid amount";
            }
            break;

        case 2:
            cout << "Please enter the amount you withdraw: ";

            cin >> Deposited_Amount;

            if (Deposited_Amount > 0 && Deposited_Amount <= Bank_Balance) {

                Bank_Balance = Bank_Balance - Deposited_Amount;
                
                cout << "Your current balance is: " << Bank_Balance << endl;
            }

            else
            {
                cout << "Your balance is insufficient.";
            }
            break;

        case 3:
            cout << "Your current balance is: " << Bank_Balance << endl;
            break;

        case 4:
            cout << "Closing program......";
            break;

        default:
            cout << "Please select the right option.";
        }
    }

     while (Select_Option != 4);

    return 0;
}