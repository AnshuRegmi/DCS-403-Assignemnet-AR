#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> countMap;

    for (char ch : str) {
        if (isalpha(ch)) {
            countMap[tolower(ch)]++;
        }
    }

    cout << "Alphabet frequency:" << endl;
    for (auto const& [key, val] : countMap) {
        cout << key << ": " << val << endl;
    }

    return 0;
}
