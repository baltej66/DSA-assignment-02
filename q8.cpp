#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                seen = true;
                break;
            }
        }
        if (!seen)
            count++;
    }

    cout << "Number of distinct elements = " << count << endl;
    return 0;
}

/*
Example:
Input: 6
Array: 1 2 2 3 4 4
Output: 4
*/