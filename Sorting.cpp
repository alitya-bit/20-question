#include <iostream>
#include <vector>
using namespace std;
//This code is developed by alityass

// Function to perform Bubble Sort in ascending order
void bubbleSortAscending(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to display array
void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of elements must be greater than 0." << endl;
        return 1;
    }

    vector<int> arr(n);

    // Input elements
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort in ascending order
    bubbleSortAscending(arr);

    cout << "\nArray in Ascending Order:\n";
    displayArray(arr);

    // Sort in descending order by reversing the sorted array
    cout << "\nArray in Descending Order:\n";
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


