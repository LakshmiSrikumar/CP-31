#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k;
        int i=0;
        unordered_map<int,int>mp;
        while (i<n){
            cin>>x;
            mp[x]++;
            i++;
        }
        if (mp[k] >=1) cout<<"YES"<<endl;
        else cout<<"No"<<endl; 
    }
}