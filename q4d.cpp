#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    char str[20][50], temp[50];

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++)
        cin >> str[i];

    // Bubble sort on strings
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++)
        cout << str[i] << endl;

    return 0;
}

/*
Example:
Input: 3
banana apple cherry
Output:
apple
banana
cherry
*/