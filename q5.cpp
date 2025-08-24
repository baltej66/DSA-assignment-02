#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int diag[n]; // only store diagonal elements

    cout << "Enter " << n << " diagonal elements:\n";
    for (int i = 0; i < n; i++)
        cin >> diag[i];

    cout << "Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << diag[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

/*
Example:
Input: n = 3
Diagonal: 1 2 3

Matrix:
1 0 0
0 2 0
0 0 3
*/