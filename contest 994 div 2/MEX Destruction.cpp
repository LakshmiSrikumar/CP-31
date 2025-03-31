#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n; 
    vector<int> arr(n); 
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int nonzero = 0; 
    bool flag = false; 

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            
            if (!flag) {
                nonzero++;
                flag = true;
            }
        } else {
            
            flag = false;
        }
    }
    if (nonzero > 2){
        cout<<2;
    }
    else{
        cout<<nonzero;
    }
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
        cout << endl; 
    }

    return 0;
}