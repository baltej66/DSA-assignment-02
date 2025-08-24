#include <iostream>
using namespace std;

// Array is sorted, contains numbers 1..n with exactly one missing (size n-1)
int main() {
    int n, a[100];
    cout << "Enter n (range is 1..n): ";
    cin >> n;
    cout << "Enter " << n - 1 << " sorted elements:\n";
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    // Linear scan: first index where a[i] != i+1
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != i + 1) {
            cout << "Missing = " << (i + 1) << "\n";
            return 0;
        }
    }
    // If no mismatch, missing is n
    cout << "Missing = " << n << "\n";
    return 0;
}