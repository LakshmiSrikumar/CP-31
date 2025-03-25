#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>a(n);
        vector<long long>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        const long long val= 1e18;
        long long curr=-(1e18);
        bool flag=true;
        for(int i=0;i<n;i++){
            long long it = val;
            if(a[i]>=curr){
                it=a[i];
            }
            long long goal=curr+a[i];
            long long is=val;
            auto j=lower_bound(b.begin(),b.end(),goal);
            if (j!=b.end()){
                is=(*j)-a[i];
            }
            long long mini=min(it,is);
            if(mini==val){
                flag=false;
                break;
            }
            curr=mini;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}