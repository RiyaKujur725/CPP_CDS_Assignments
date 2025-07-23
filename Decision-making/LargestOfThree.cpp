#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Find the largest of three numbers\n\n";

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "\n\nThe largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "\n\nThe largest number is: " << num2 << endl;
    } else {
        cout << "\n\nThe largest number is: " << num3 << endl;
    }

    return 0;
}
