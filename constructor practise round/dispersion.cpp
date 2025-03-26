#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
// Function to check if we can achieve a minimum gap D.
bool canAchieve(const vector<ll>& x, ll D) {
    int n = x.size();
    // For the first chip, choose the smallest allowed position.
    ll cur = x[0] - 1; 
    // For subsequent chips, greedily choose the smallest allowed position that is at least (cur + D)
    for(int i = 1; i < n; i++){
        ll needed = cur + D;
        // Allowed positions for chip i: x[i]-1, x[i], x[i]+1
        if(x[i] - 1 >= needed){
            cur = x[i] - 1;
        } else if(x[i] >= needed){
            cur = x[i];
        } else if(x[i] + 1 >= needed){
            cur = x[i] + 1;
        } else {
            return false; // none of the allowed positions is high enough
        }
    }
    return true;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> x(n);
        for (int i = 0; i < n; i++){
            cin >> x[i];
        }
        // The positions are given in increasing order.
        // Binary search for the maximum possible dispersion.
        ll lo = 0;
        // Maximum possible dispersion: (x[n-1]-x[0]) + 2 (by shifting the first chip left and last chip right)
        ll hi = (x[n-1] - x[0]) + 2;  
        ll ans = 0;
        while(lo <= hi){
            ll mid = lo + (hi - lo) / 2;
            if(canAchieve(x, mid)){
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
 
        cout << ans << "\n";
    }
    return 0;
}
