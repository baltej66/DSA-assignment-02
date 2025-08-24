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
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
                count++;
        }
    }

    cout << "Number of inversions = " << count << endl;
    return 0;
}

/*
Example:
Input: 5
Array: 2 4 1 3 5
Inversions: (2,1), (4,1), (4,3) = 3
Output: 3
*/