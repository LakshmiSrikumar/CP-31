#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        if( k==0) {
            cout<<"0"<<endl;
        }
        else{
            int ops = abs(k)/p;
            if (abs(k)%p!=0){
                ops+=1;
            }
            if (ops>n){
                cout<<"-1"<<endl;
            }
            else{
                cout<<ops<<endl;
            }
        }
    }
}
