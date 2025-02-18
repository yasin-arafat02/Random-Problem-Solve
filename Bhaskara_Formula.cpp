#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double A, B, C;
    double R1, R2;
    cin >> A >> B >> C;
    if (((B * B) - (4 * A * C)) < 0 || A == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        R1 = (-B + (sqrt(B * B - 4 * A * C))) / (2 * A);
        R2 = (-B - (sqrt(B * B - 4 * A * C))) / (2 * A);
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
    return 0;
}
