#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str; // or getline(cin, str) if spaces needed

    string revStr = str;
    reverse(revStr.begin(), revStr.end());

    cout << "Reversed string: " << revStr << endl;

    return 0;
}
