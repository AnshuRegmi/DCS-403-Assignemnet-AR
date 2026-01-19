#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string word, longestWord = "";

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;
}
