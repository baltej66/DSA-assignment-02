#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() {
    int r, c, n1, n2;
    Term a[100], b[100], sum[200];

    cout << "Enter rows, cols of matrices: ";
    cin >> r >> c;

    cout << "Enter number of non-zero elements in Matrix A: ";
    cin >> n1;
    a[0] = {r, c, n1};
    cout << "Enter row col val for " << n1 << " elements:\n";
    for (int i = 1; i <= n1; i++)
        cin >> a[i].row >> a[i].col >> a[i].val;

    cout << "Enter number of non-zero elements in Matrix B: ";
    cin >> n2;
    b[0] = {r, c, n2};
    cout << "Enter row col val for " << n2 << " elements:\n";
    for (int i = 1; i <= n2; i++)
        cin >> b[i].row >> b[i].col >> b[i].val;

    // Addition
    int i = 1, j = 1, k = 1;
    while (i <= n1 && j <= n2) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
            sum[k++] = a[i++];
        else if (b[j].row < a[i].row || (a[i].row == b[j].row && b[j].col < a[i].col))
            sum[k++] = b[j++];
        else { // same position
            int v = a[i].val + b[j].val;
            if (v != 0)
                sum[k++] = {a[i].row, a[i].col, v};
            i++; j++;
        }
    }

    // remaining
    while (i <= n1) sum[k++] = a[i++];
    while (j <= n2) sum[k++] = b[j++];

    sum[0] = {r, c, k - 1};

    cout << "Sum in triplet form:\n";
    for (int t = 0; t < k; t++)
        cout << sum[t].row << " " << sum[t].col << " " << sum[t].val << endl;

    return 0;
}

/*
Example:
Matrix A (3x3):
0 0 5
1 1 8
2 2 3

Matrix B (3x3):
0 0 2
1 1 7
2 2 4

Result (3x3):
0 0 7
1 1 15
2 2 7
*/