#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Please select a movie to see its review:\n";
    cout << "1. 13 Going 30\n";
    cout << "2. The Summer I Turned Pretty\n";
    cout << "3. Fighter Club\n";
    cout << "4. To All The Boys\n";
    cout << "5. Sixteen Candles\n";
    cout << "6. You\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nMovie: 13 Going 30\nRating: 4.2 out of 5 stars\n";
            break;
        case 2:
            cout << "\nMovie: The Summer I Turned Pretty\nRating: 4.0 out of 5 stars\n";
            break;
        case 3:
            cout << "\nMovie: Fighter Club\nRating: 4.7 out of 5 stars\n";
            break;
        case 4:
            cout << "\nMovie: To All The Boys\nRating: 4.3 out of 5 stars\n";
            break;
        case 5:
            cout << "\nMovie: Sixteen Candles\nRating: 4.1 out of 5 stars\n";
            break;
        case 6:
            cout << "\nMovie: You\nRating: 4.5 out of 5 stars\n";
            break;
        default:
            cout << "\nInvalid choice. Please run the program again and select a number between 1 and 6.\n";
    }

    return 0;
}
