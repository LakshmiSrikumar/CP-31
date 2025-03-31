#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        long long k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        
        int P[200005];  
        P[0] = 0;
        for (int i = 0; i < n; i++){
            P[i+1] = P[i] + (s[i]=='R' ? 1 : -1);
        }
        
        int t_0 = -1;
        for (int i = 1; i <= n; i++){
            if(x + P[i] == 0){
                t_0 = i;
                break;
            }
        }
       
        if(t_0 == -1 || t_0 > k){
            cout << 0 << endl;
            continue;
        }
        
        long long reset = 1;
        
        int repeat = -1;
        for (int i = 1; i <= n; i++){
            if(P[i] == 0){
                repeat = i;
                break;
            }
        }
        
        if(repeat == -1){
           
            cout << reset << endl;
        } else {
            long long rem = k - t_0;
            reset += rem / repeat;
            cout << reset << endl;
        }
    }
}