#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int> cnt(30, 0);
        for (int num : a) {
            for (int i = 0; i < 30; ++i) {
                if (num & (1 << i)) {
                    cnt[i]++;
                }
            }
        }
        
        long long max_sum = 0;
        for (int num : a) {
            long long sum = 0;
            for (int i = 0; i < 30; ++i) {
                if (num & (1 << i)) {
                    sum += (n - cnt[i]) * 1LL * (1 << i);
                } else {
                    sum += cnt[i] * 1LL * (1 << i);
                }
            }
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
        
        cout << max_sum << endl;
    }
    
}