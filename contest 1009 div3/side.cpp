#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long sum=0;
        int n,x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        cout<<sum - (n-1)<<endl;
    }
}