#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int size = n * (n + 1) / 2;
    int sym[size];

    cout << "Enter " << size << " elements (lower triangular including diagonal):\n";
    for (int i = 0; i < size; i++)
        cin >> sym[i];

    cout << "Symmetric Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)  // lower part input diya
                cout << sym[k++] << " ";
            else
                cout << sym[j * (j + 1) / 2 + i] << " "; // mirror element
        }
        cout << endl;
    }

    return 0;
}

/*
Example: n = 3
Input (lower triangle 6 elements): 1 2 3 4 5 6

Matrix:
1 2 3
2 4 5
3 5 6
*/