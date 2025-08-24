#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], result[100];
    cout << "Enter a string: ";
    cin >> str;

    int k = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    cout << "String without vowels: " << result << endl;
    return 0;
}

/*
Example:
Input: hello
Output: hll
*/