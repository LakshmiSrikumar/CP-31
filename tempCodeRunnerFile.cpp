#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int solve(string s){
    int i=0,c=0,b=0;
    int n=s.size();
    while(i<n){
    c=0;
    while(i<n && s[i]=='#')i++;
    while (i<n && s[i]=='.'){
        c++;
        i++;
    }
    
    if (c>=3) return 2;
    b+=c;
    }
    return b;
    
}

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        char c;
        for (int i=0;i<n;i++){
            cin>>c;
            s.push_back(c);
        }
        int ans=solve(s);
        cout<<ans<<endl;
    }
}