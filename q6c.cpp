#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() {
    int r1, c1, n1, r2, c2, n2;
    Term a[100], b[100], c[200];

    cout << "Enter rows, cols of Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter number of non-zero elements in Matrix A: ";
    cin >> n1;
    a[0] = {r1, c1, n1};
    cout << "Enter row col val for " << n1 << " elements:\n";
    for (int i = 1; i <= n1; i++)
        cin >> a[i].row >> a[i].col >> a[i].val;

    cout << "Enter rows, cols of Matrix B: ";
    cin >> r2 >> c2;
    cout << "Enter number of non-zero elements in Matrix B: ";
    cin >> n2;
    b[0] = {r2, c2, n2};
    cout << "Enter row col val for " << n2 << " elements:\n";
    for (int i = 1; i <= n2; i++)
        cin >> b[i].row >> b[i].col >> b[i].val;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!\n";
        return 0;
    }

    int result[50][50] = {0}; // store full for simplicity

    // Multiply A and B
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (a[i].col == b[j].row) {
                result[a[i].row][b[j].col] += a[i].val * b[j].val;
            }
        }
    }

    // Convert result to triplet
    int k = 1;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (result[i][j] != 0) {
                c[k].row = i;
                c[k].col = j;
                c[k].val = result[i][j];
                k++;
            }
        }
    }
    c[0] = {r1, c2, k - 1};

    cout << "Product in triplet form:\n";
    for (int i = 0; i < k; i++)
        cout << c[i].row << " " << c[i].col << " " << c[i].val << endl;

    return 0;
}

/*
Example:
A (2x2):
0 0 5
1 1 8

B (2x2):
0 0 2
1 1 3

Result:
0 0 10
1 1 24
*/