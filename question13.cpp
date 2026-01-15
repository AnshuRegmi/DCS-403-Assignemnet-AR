//case study: converting hexadecimal digit to a decimal value. program converts hexadecimal digit ('0'-'9', 'A'-'F') to decimal equivalent
//demonstrates ascii arithmetic == converting chars into numeric value
//hints: 'A' --> ASCII :65, Need condition to handle 0-9 and need condition to handle A-F and A--> Ascii 65-->10+(65-65)=10

#include <iostream>
using namespace std;
int main() {
    char hexDigit;
    int decimalValue;
    cout << "Enter a hexadecimal digit (0-9, A-F): ";
    cin >> hexDigit;
    if (hexDigit >= '0' && hexDigit <= '9') {
        decimalValue = hexDigit - '0';
    }
    else if (hexDigit >= 'A' && hexDigit <= 'F') {
        decimalValue = 10 + (hexDigit - 'A');
    }
    else if (hexDigit >= 'a' && hexDigit <= 'f') {
        decimalValue = 10 + (hexDigit - 'a');
    }
    else {
        cout << "Invalid hexadecimal digit!" << endl;
        return 1;
    }
    cout << "Hexadecimal '" << hexDigit << "' = Decimal " << decimalValue << endl;
    return 0;
}
