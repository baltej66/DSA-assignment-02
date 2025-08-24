#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() {
    int r, c, n;
    cout << "Enter rows, cols, non-zero elements: ";
    cin >> r >> c >> n;

    Term a[100], b[100];
    a[0].row = r; a[0].col = c; a[0].val = n;

    cout << "Enter row col val for " << n << " elements:\n";
    for (int i = 1; i <= n; i++) {
        cin >> a[i].row >> a[i].col >> a[i].val;
    }

    // transpose
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].val = a[0].val;

    int k = 1;
    for (int i = 0; i < a[0].col; i++) {       // for each column
        for (int j = 1; j <= n; j++) {
            if (a[j].col == i) {
                b[k].row = a[j].col;
                b[k].col = a[j].row;
                b[k].val = a[j].val;
                k++;
            }
        }
    }

    cout << "Transpose in triplet form:\n";
    for (int i = 0; i <= n; i++) {
        cout << b[i].row << " " << b[i].col << " " << b[i].val << endl;
    }

    return 0;
}

/*
Example:
Matrix:
3x3 with 3 non-zero
Input:
0 0 5
1 1 8
2 2 3

Triplet transpose:
0 0 5
1 1 8
2 2 3
*/