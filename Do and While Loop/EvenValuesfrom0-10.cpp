#include <iostream>
using namespace std;

int main() {
    cout << "Let's find all the even numbers between 0 and 10!\n\n";

    cout << "Even numbers are: ";
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i;
            if (i < 10) {
                cout << ", ";  
            }
        }
    }

    return 0;
}
