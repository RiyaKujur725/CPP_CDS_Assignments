#include <iostream>
#include <cctype> 
#include <string> 
using namespace std;

int main() {
    string input;
    char ch;

    cout << " Vowel or Consonant Checker\n";

    while (true) {
        cout << "Enter a single alphabet character: ";
        cin >> input;

// Check if input is exactly one character and is a letter
      
        if (input.length() == 1 && isalpha(input[0])) {
            ch = input[0];
            break;
        } else {
            cout << "Invalid input. Please enter ONLY ONE LETTER (A-Z or a-z).\n\n";
        }
    }

// Convert to lowercase for easy vowel check
  
    char lowerCh = tolower(ch);

    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
        cout << ch << " is a vowel!" << endl;
    } else {
        cout <<ch << " is a consonant!" << endl;
    }

    cout << "Thanks for using the checker!" << endl;
    return 0;
}
