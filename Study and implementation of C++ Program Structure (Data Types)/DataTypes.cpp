#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float pi = 3.14f;
    double distance = 12345.678;
    char grade = 'A';
    bool passed = true;

    cout << "Age (int): " << age << endl;
    cout << "Pi (float): " << pi << endl;
    cout << "Distance (double): " << distance << " km" << endl;
    cout << "Grade (char): " << grade << endl;
    cout << "Passed (bool): " << (passed ? "Yes" : "No") << endl;

    return 0;
}
