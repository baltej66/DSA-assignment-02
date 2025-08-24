#include <iostream>
using namespace std;

// Array is sorted, contains numbers 1..n with exactly one missing (size n-1)
int main() {
    int n, a[100];
    cout << "Enter n (range is 1..n): ";
    cin >> n;
    cout << "Enter " << n - 1 << " sorted elements:\n";
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    int l = 0, r = n - 2; // last index is n-2 (since size = n-1)
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == mid + 1) l = mid + 1; // missing on right
        else r = mid - 1;                   // missing on left (or here)
    }
    cout << "Missing = " << (l + 1) << "\n";
    return 0;
}