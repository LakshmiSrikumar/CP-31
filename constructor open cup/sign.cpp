#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        bool flag=false;
        for(int i=0;i<n;i+=2){
            int a= s[i];
            int b=s[i+2];
            if (s[i+1]=='>'){
                if (a>b){
                    flag=true;
                }
            }
            else if (s[i+1]=='<'){
                if(a<b){
                    flag=true;
                }
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}