#include <bits/stdc++.h>
using namespace std;
 
int main(){
   
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> b(2*n);
        for (int i = 0; i < 2*n; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
 
        if(n == 1){
             long long x = b[0], y = b[1];
            long long a1 = y - x; 
            
            cout << a1 << " " << y << " " << x << endl;
        } else {
           long long sumE = 0, sumO = 0;
            for (int i = 0; i < n; i++){
                sumO += b[i];
            }
            for (int i = n; i < 2*n; i++){
                sumE += b[i];
            }
            long long a1 = sumE - sumO;
           
            cout << a1;
            for (int i = 0; i < n; i++){
                cout << " " << b[n + i] << " " << b[i];
            }
            cout << endl;
        }
    }
    return 0;
}
