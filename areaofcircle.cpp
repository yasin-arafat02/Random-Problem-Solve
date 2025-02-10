#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double A, R, n;
    cin >> R;
    n = 3.14159;
    A = n * R * R;
    cout << "A=" << fixed << setprecision(4) << A << endl;
}
