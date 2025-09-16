#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//This code is developed by Alityass

// Define the function to be integrated
double f(double x) {
    // Example: f(x) = 1 / (1 + x^2)
    return 1.0 / (1.0 + x * x);
    // You can replace this with your own function
}

int main() {
    double a, b;    // Limits of integration
    int n;          // Number of subintervals (must be even)

    cout << fixed << setprecision(6);
    cout << "Simpson's 1/3 Rule Integration\n";

    // Input limits and subintervals
    cout << "Enter lower limit (a): ";
    cin >> a;
    cout << "Enter upper limit (b): ";
    cin >> b;
    cout << "Enter number of subintervals (n - even number): ";
    cin >> n;

    // Check if n is even
    if (n <= 0 || n % 2 != 0) {
        cout << "Number of subintervals must be a positive even number." << endl;
        return 1;
    }

    // Step size
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    // Apply Simpson's Rule
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    double result = (h / 3) * sum;

    // Output the result
    cout << "Approximate value of the integral = " << result << endl;

    return 0;
}

