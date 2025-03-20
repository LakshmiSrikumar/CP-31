#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int y;
        for (int i=0;i<n;i++){
            cin>>y;
            arr[i]=y;
        }
        if (arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}