#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int tri[3 * n - 2]; // compact storage
    int k = 0;

    cout << "Enter elements for tri-diagonal matrix ("
         << (3 * n - 2) << " values):\n";

    for (int i = 0; i < 3 * n - 2; i++)
        cin >> tri[i];

    cout << "Tri-diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)               // main diagonal
                cout << tri[i] << " ";
            else if (j == i + 1)      // upper diagonal
                cout << tri[n + i] << " ";
            else if (i == j + 1)      // lower diagonal
                cout << tri[2 * n - 1 + j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

/*
Example (n=3):
Input (3n-2=7 values):
1 2 3 4 5 6 7

Matrix:
1 4 0
6 2 5
0 7 3
*/
