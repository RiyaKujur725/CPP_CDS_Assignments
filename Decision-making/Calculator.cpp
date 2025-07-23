#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Simple Calculator : \nCan perform calculations of Addition (+), Substraction (-), Multiplication(*), Division (/) \n\n";
    cout << "Your input: ";
    cin >> num1 >> op >> num2;

    cout << "Calculating...\n";

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
    } else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
    } else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
    } else if (op == '/') {
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
        } else {
            cout << "Oops! You can't divide by zero.\n";
        }
    } else {
        cout << "Oops! Invalid operator. Please use +, -, * or / only.\n";
    }

    cout << "Thanks!\n";

    return 0;
}

