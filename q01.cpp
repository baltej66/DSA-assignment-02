#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int n, a[100], key;
    cout << "Enter number of elements (sorted): ";
    cin >> n;
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter key: ";
    cin >> key;

    int pos = binarySearch(a, n, key);
    if (pos != -1) cout << "Found at index " << pos << "\n";
    else cout << "Not found\n";
    return 0;
}