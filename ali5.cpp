// This code is developed by alityas
#include <iostream>
#include <cmath>  // for sqrt() function
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle:\n";
    cout << "Side a: ";
    cin >> a;
    cout << "Side b: ";
    cin >> b;
    cout << "Side c: ";
    cin >> c;

    // Check for validity of triangle
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2.0;  // semi-perimeter
        double area = sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula

        cout << "\nThe area of the triangle is: " << area << endl;
    } else {
        cout << "\nInvalid triangle: the sum of any two sides must be greater than the third side.\n";
    }

    return 0;
}

