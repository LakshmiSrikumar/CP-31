#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long sum = n*(n+1)/2;
        long long low= k*(k+1)/2;
        long long high = sum - (n-k)*(n-k+1)/2;

        if (low<= x && x<=high) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}