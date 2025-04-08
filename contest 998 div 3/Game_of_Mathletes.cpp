#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>blackboard(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>blackboard[i];
            mp[blackboard[i]]++;
        }
        int score=0;
        for(auto it:mp){
            int num=it.first;
            int freq=it.second;
            int comp = k-num;
            if(mp.count(comp)){
                int twin = min(freq ,mp[comp]);
                if (num==comp) twin/=2;
                score+=twin;
                mp[num]-=twin;
                mp[comp]-=twin;
            }
        }
        cout<<score<<endl;
    }
}