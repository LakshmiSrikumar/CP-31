#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int cnt=0;
    while (t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if (s[i]=='+'){
                cnt++;
            }
        }
    }
    cout<<cnt;
}