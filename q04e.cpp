#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string in UPPERCASE: ";
    cin >> str;

    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);   // convert each char
    }

    cout << "Lowercase string: " << str << endl;
    return 0;
}

/*
Example:
Input: HELLO
Output: hello
*/