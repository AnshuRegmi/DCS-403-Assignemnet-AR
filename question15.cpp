#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double angleDegrees;
    cout << "Enter angle in degrees: ";
    cin >> angleDegrees;

    double angleRadians = angleDegrees * M_PI / 180.0;

    cout << "Sine: " << sin(angleRadians) << endl;
    cout << "Cosine: " << cos(angleRadians) << endl;
    cout << "Tangent: " << tan(angleRadians) << endl;

    return 0;
}
