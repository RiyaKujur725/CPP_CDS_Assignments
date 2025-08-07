#include <iostream>
using namespace std;

int main()
{
    cout << " Welcome to the Student Marks Recorder! \n\n";

    int n;
    cout << " How many subjects do you have? ";
    cin >> n;

    int marks[n];

    cout << "\nPlease enter your marks below (under 100):\n";

    for (int i = 0; i < n; i++)
    {
        cout << "  Enter marks for Subject " << (i + 1) << ": ";
        cin >> marks[i];
    }

    cout << "\n Here are the marks you entered:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Subject " << (i + 1) << ": " << marks[i] << " marks\n";
    }

    cout << "\n Thank you for using the Marks Recorder. All the best! \n";

    return 0;
}
