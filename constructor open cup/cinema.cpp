#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        int begin= max({a1,b1,c1});
        int end=min({a2,b2,c2});

        if (begin<=end){
            cout<<begin<<endl;;
        }
        else{
            cout<<0<<endl;
        }
    }
}