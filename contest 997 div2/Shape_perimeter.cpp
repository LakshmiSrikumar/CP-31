#include<bits/stdc++.h>

using namespace std;



int main() {
   

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int> x(n),y(n);
        for(int i=0;i<n;i++) {
          cin>>x[i]>>y[i];
        }
        int cnt=0;
        for(int i=1;i<n;i++) {
          cnt += (2*(2*m-(x[i]+y[i])));
        }
        cout<<4*m*n-cnt<<endl;
    }
}