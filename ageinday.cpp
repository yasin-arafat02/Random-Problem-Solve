#include <iostream>
using namespace std;
int main() {
    int x, years, months, days;
    cin >> x;
    years = x / 365;
    x %= 365;
    months = (x % 365) / 30;
    days = (x % 30);
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
}
