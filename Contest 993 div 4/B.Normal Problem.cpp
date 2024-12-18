#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        string b="";
        for(int i=n-1;i>=0;i--){
            if (s[i]=='p'){
                b+='q';
            }
            else if (s[i]=='q'){
                b=b+'p';
            }
            else if (s[i]=='w'){
                b=b+'w';
            }
        }
        cout<<b<<endl;
    }
}