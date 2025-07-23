#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Coordinate Position Checker\n\n";
    cout << "Enter the X coordinate: ";
    cin >> x;
    cout << "Enter the Y coordinate: ";
    cin >> y;

    cout << "\nResult:\n";

    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 1.\n";
    } else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 2.\n";
    } else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 3.\n";
    } else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 4.\n";
    } else if (x == 0 && y == 0) {
        cout << "The point is at the Origin.\n";
    } else if (x == 0) {
        cout << "The point lies on the Y-axis.\n";
    } else if (y == 0) {
        cout << "The point lies on the X-axis.\n";
    }

    return 0;
}
