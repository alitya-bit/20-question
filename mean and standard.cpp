// This code developed by aalityass
#include <iostream>
#include <vector>
#include <cmath> // For sqrt and pow
using namespace std;

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of values must be greater than 0." << endl;
        return 1;
    }

    vector<double> numbers(n);
    double sum = 0.0;

    // Input numbers
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate mean
    double mean = sum / n;

    // Calculate standard deviation
    double variance = 0.0;
    for (int i = 0; i < n; ++i) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= n;
    double stdDeviation = sqrt(variance);

    // Output results
    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << stdDeviation << endl;

    return 0;
}

