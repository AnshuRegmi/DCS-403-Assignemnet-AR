#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (str.empty()) return 0;

    string compressed = "";
    int count = 1;
    for (int i = 0; i < str.length(); i++) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << compressed << endl;

    return 0;
}
