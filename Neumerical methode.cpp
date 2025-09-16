#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//This code is developed by alityass

// Define the function f(x)
double f(double x) {
    return x*x*x - x - 2; // Example: f(x) = x^3 - x - 2
}

// Define the derivative f'(x)
double f_derivative(double x) {
    return 3*x*x - 1; // f'(x) = 3x^2 - 1
}

// Newton-Raphson Method
void newtonRaphson(double x0, double tolerance, int maxIter) {
    cout << "\nNewton-Raphson Method:\n";
    double x = x0;
    for (int i = 1; i <= maxIter; ++i) {
        double fx = f(x);
        double fpx = f_derivative(x);

        if (fabs(fpx) < 1e-10) {
            cout << "Derivative too small. Method fails.\n";
            return;
        }

        double x1 = x - fx / fpx;

        cout << "Iteration " << i << ": x = " << x1 << ", f(x) = " << f(x1) << endl;

        if (fabs(x1 - x) < tolerance) {
            cout << "Root found: " << x1 << endl;
            return;
        }

        x = x1;
    }

    cout << "Newton-Raphson did not converge in " << maxIter << " iterations.\n";
}

// Bisection Method
void bisection(double a, double b, double tolerance, int maxIter) {
    cout << "\nBisection Method:\n";

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. f(a) and f(b) must have opposite signs.\n";
        return;
    }

    double c;
    for (int i = 1; i <= maxIter; ++i) {
        c = (a + b) / 2.0;

        cout << "Iteration " << i << ": c = " << c << ", f(c) = " << f(c) << endl;

        if (fabs(f(c)) < tolerance || (b - a) / 2.0 < tolerance) {
            cout << "Root found: " << c << endl;
            return;
        }

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Bisection method did not converge in " << maxIter << " iterations.\n";
}

int main() {
    double x0, a, b, tolerance;
    int maxIter;

    cout << fixed << setprecision(6);
    cout << "Root Finding using Newton-Raphson and Bisection Methods\n";
    cout << "Equation used: f(x) = x^3 - x - 2\n";

    cout << "\nEnter initial guess for Newton-Raphson: ";
    cin >> x0;

    cout << "Enter interval [a, b] for Bisection:\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "Enter tolerance: ";
    cin >> tolerance;

    cout << "Enter maximum iterations: ";
    cin >> maxIter;

    // Run both methods
    newtonRaphson(x0, tolerance, maxIter);
    bisection(a, b, tolerance, maxIter);

    return 0;
}

