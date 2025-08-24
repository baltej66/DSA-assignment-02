#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int lower[size];
    cout << "Enter " << size << " elements for lower triangular matrix:\n";
    for (int i = 0; i < size; i++)
        cin >> lower[i];

    cout << "Lower Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)  // element exists
                cout << lower[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

/*
Example: n = 3
Input: 1 2 3 4 5 6

Matrix:
1 0 0
2 3 0
4 5 6
*/