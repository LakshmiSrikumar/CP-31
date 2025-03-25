#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long bomb=b;
        for (auto it :arr){
            bomb+=min(it+1, a)- 1;
        }
        cout<<bomb<<endl;
    }
}