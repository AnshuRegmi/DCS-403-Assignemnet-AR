#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams." << endl;
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }

    return 0;
}
