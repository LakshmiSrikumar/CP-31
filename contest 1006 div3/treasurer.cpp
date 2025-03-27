#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int a=0,b=0;
        for(char c: s){
            if (c=='_'){
                b++;
            }
            else{
                a++;
            }
        }
        if (a<2 || b==0){
            cout<<0<<endl;
        }
        else{
            cout<<(1ll*a*a/4)*b<<endl;
        }
    }
}