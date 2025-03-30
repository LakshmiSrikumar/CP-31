#include <bits/stdc++.h>
using namespace std;


bool power(long long n) {
    return (n>0 && (n & (n - 1)) == 0);
}



int main(){
       
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        
        if(power(x) || power(x+1)){
            cout << -1 << endl;
            continue;
        }
        
        long long a =1;
        while (a*2 < x){
            a*=2;
        }
        long long y= a-1; 
        cout << y << endl;
    }
    
}
