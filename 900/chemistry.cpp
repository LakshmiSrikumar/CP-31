#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        map<char,int>mp;
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(auto it : s){
            mp[it]++;
        }
        int cnt=0;
        for(auto it: mp){
            int freq=it.second;
            if (freq%2!=0) cnt++;
        }
        if (k < cnt-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}