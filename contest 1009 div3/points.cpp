#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> centers(n);
        for (int i = 0; i < n; i++){
            cin >> centers[i];
        }
        vector<int> radii(n);
        for (int i = 0; i < n; i++){
            cin >> radii[i];
        }
        
        unordered_map<long long, int> best;
        
        best.reserve(2*m + n + 10);
        
        for (int i = 0; i < n; i++){
            long long xi = centers[i];
            int ri = radii[i];
           
            long long start = xi - ri;
            long long end   = xi + ri;
            for (long long x = start; x <= end; x++){
                long long dx = x - xi;
                long long rem = (long long)ri * ri - dx * dx;
                
                int d = (int)floor(sqrt((long double)rem + 1e-9));
                if (best.find(x) == best.end()){
                    best[x] = d;
                } else {
                    best[x] = max(best[x], d);
                }
            }
        }
        
        long long ans = 0;
        for (auto &p : best){
            ans += 2LL * p.second + 1;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
