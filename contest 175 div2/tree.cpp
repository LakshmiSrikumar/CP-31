#include <iostream>
#include <vector>
using namespace std;
 
const int MOD = 998244353;
 
int main(){
    
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> parent(n+1, 0);
        for (int i = 2; i <= n; i++){
            cin >> parent[i];
        }
        
        vector<int> depth(n+1, 0);
        depth[1] = 0;
      
        vector<vector<int>> level(n+1);
        level[0].push_back(1);
        int maxi = 0;
        for (int i = 2; i <= n; i++){
            depth[i] = depth[parent[i]] + 1;
            maxi = max(maxi, depth[i]);
            level[depth[i]].push_back(i);
        }
        
        vector<long long> dp(n+1, 0);
        vector<long long> f(maxi+1, 0);
        
        dp[1] = 1;
        f[0] = 1; 
        
        if(maxi >= 1){
            long long sum = 0;
  
            for (int v : level[1]){
                dp[v] = 1;  
                sum = (sum + dp[v]) % MOD;
            }
            f[1] = sum;
        }
        
        for (int d = 2; d <= maxi; d++){
            long long sum = 0;
            for (int u : level[d]){
                dp[u] = (f[d-1] - dp[parent[u]]) % MOD;
                if(dp[u] < 0) dp[u] += MOD;
                sum = (sum + dp[u]) % MOD;
            }
            f[d] = sum;
        }
        
        long long ans = 0;
        for (int d = 0; d <= maxi; d++){
            ans = (ans + f[d]) % MOD;
        }
        
        cout << ans % MOD << endl;
    }
    
}
