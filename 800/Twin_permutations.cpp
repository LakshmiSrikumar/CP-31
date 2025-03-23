#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>x;
            cout<<(n+1-x)<<" ";
        }
        cout<<endl;
    }

}