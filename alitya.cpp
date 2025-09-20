// this code is developed by alitya
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float basicSalary, hra, da, otherAllowances, totalSalary;

    // Get input from user
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter HRA (House Rent Allowance): ";
    cin >> hra;

    cout << "Enter DA (Dearness Allowance): ";
    cin >> da;

    cout << "Enter Other Allowances: ";
    cin >> otherAllowances;

    // Calculate total salary
    totalSalary = basicSalary + hra + da + otherAllowances;

    // Display result
    cout << "Total Salary of the employee is: " << totalSalary << endl;

    return 0;
}

