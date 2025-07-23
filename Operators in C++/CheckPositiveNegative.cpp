#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Number Checker - Positive, Negative, or Zero\n\n";
    cout << "Please enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "You entered a positive number." << endl;
    } else if (number < 0) {
        cout << "You entered a negative number." << endl;
    } else {
        cout << "You entered zero." << endl;
    }

    return 0;
}
