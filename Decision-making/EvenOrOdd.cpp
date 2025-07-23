#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Even or Odd Checker\n\n";
    cout << "Please enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number " << number << " is even." << endl;
    } else {
        cout << "The number " << number << " is odd." << endl;
    }

    return 0;
}
