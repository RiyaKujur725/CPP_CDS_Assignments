#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    cout << "Student Marks and Grade Calculator\n";

    cout << "Enter marks for Subject 1: ";
    cin >> m1;
    cout << "Enter marks for Subject 2: ";
    cin >> m2;
    cout << "Enter marks for Subject 3: ";
    cin >> m3;
    cout << "Enter marks for Subject 4: ";
    cin >> m4;
    cout << "Enter marks for Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    cout << "\nSummary of Results:\n";
    cout << "Total Marks: " << total << " out of 500\n";
    cout << "Percentage : " << average << "%\n";

    cout << "Grade      : ";
    if (average >= 90 && average <= 100) {
        cout << "A+" << endl;
    } else if (average >= 80) {
        cout << "A" << endl;
    } else if (average >= 70) {
        cout << "B+" << endl;
    } else if (average >= 60) {
        cout << "B" << endl;
    } else if (average >= 50) {
        cout << "C" << endl;
    } else if (average >= 40) {
        cout << "D" << endl;
    } else {
        cout << "F (Fail)" << endl;
    }

    return 0;
}
