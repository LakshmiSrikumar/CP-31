#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if (s=="us"){
            cout<<"i"<<endl;
        }
        else if (s=="i"){
            cout<<"us"<<endl;
        }
        else{
            int n=s.size();
            string t;
            if (s.substr(n-1)=="i"){
                for(int i=0;i<n-1;i++){
                    t+=s[i];
                }
                cout<<t+"us"<<endl;
            }
            else if(s.substr(n-2)=="us"){
                for(int i=0;i<n-2;i++){
                    t+=s[i];
                }
                cout<<t+"i"<<endl;
            }
        }
    }
}