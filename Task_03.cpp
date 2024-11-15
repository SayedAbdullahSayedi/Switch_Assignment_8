#include <iostream>

using namespace std;

int main() {

    char Alphbetic_letter;

    cout << "Please enter an Alphbetic_letter: ";

    cin >> Alphbetic_letter;

    switch (Alphbetic_letter) {

    case 'A':

    case 'E':

    case 'I':

    case 'O':
    
    case 'U':

    case 'a':

    case 'e':

    case 'i':

    case 'o':

    case 'u':

        cout << Alphbetic_letter << " = this is a vowel letter.";
        break;

    default:
        cout << Alphbetic_letter << " = this is a consonant letter.";
    }

    return 0;
}