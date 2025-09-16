#include <iostream>
using namespace std;
//This code is developed by Alityass

int main() {
    int num;
    bool isPrime = true;

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Handle edge cases
    if (num <= 1) {
        isPrime = false; // 0, 1, and negative numbers are not prime
    } else {
        // Check for factors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}


