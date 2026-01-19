#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool toUpper = true;
    for (int i = 0; i < str.length(); ++i) {
        if (isalpha(str[i])) {
            if (toUpper) {
                str[i] = toupper(str[i]);
            } else {
                str[i] = tolower(str[i]);
            }
            toUpper = !toUpper; // Toggle for next alphabet
        }
    }

    cout << "Modified string: " << str << endl;

    return 0;
}
