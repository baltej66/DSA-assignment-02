#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int upper[size];

    cout << "Enter " << size << " elements for upper triangular matrix:\n";
    for (int i = 0; i < size; i++)
        cin >> upper[i];

    cout << "Upper Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i)   // diagonal and above
                cout << upper[k++] << " ";
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
1 2 3
0 4 5
0 0 6
*/