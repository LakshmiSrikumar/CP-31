#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
bool paint(ll T, int n, int k, const string &s, const vector<ll> &a) {
    int need = 0;
    int i = 0;
    while(i < n) {
        
        if(a[i] > T && s[i] == 'R'){
            i++;
            continue;
        }
      
        bool flag = false;
        while(i < n && !(a[i] > T && s[i]=='R')) { 
            if(a[i] > T && s[i]=='B') {
                flag = true;
            }
            i++;
        }
        if(flag) {
            need++;
        }
    }
    return need <= k;
}
 
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> a(n);
        ll maxi = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
 
        ll lo = 0, hi = maxi, ans = hi;
        while(lo <= hi){
            ll mid = lo + (hi - lo) / 2;
            if(paint(mid, n, k, s, a)){
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
 
        cout << ans << endl;
    }
    
}
