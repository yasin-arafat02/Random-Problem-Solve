#include <iostream>
using namespace std;
typedef long long ll;
void solve() {
    ll n, x, y, d;
    cin >> n >> x >> y >> d; 
    if ((y - x) % d == 0) {
        cout << (y - x) / d << "\n";
        return;
    }
    ll res = 1e9;
    if ((y - 1) % d == 0) res = min(res, (x - 1 + d - 1) / d + (y - 1) / d);
    if ((n - y) % d == 0) res = min(res, (n - x + d - 1) / d + (n - y) / d);
    cout << (res == 1e9 ? -1 : res) << "\n";
}
int main() { 
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
