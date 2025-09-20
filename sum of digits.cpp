#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user for input
    cout << "Enter a positive integer: ";
    cin >> number;

    // Validate input
    if (number <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1; // Exit with error code
    }

    int sum = 0;
    int originalNumber = number;

    // Calculate sum of digits
    while (number > 0) {
        int digit = number % 10; // Extract last digit
        sum += digit;            // Add to sum
        number /= 10;            // Remove last digit
    }

    // Display result
    cout << "The sum of digits of " << originalNumber << " is: " << sum << endl;

    return 0;
}

