#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int lower = max(m - r, 0);
        int upper = min(-l, m);
        int L = lower;
        int l_prime = -L;
        int r_prime = m - L;
        cout << l_prime << " " << r_prime << endl;
    }
    
}