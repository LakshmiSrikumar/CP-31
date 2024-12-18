#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int neg=0,pos=0,x=0,ans=0;
        while(n--){
            cin>>x;
            if (x==-1) neg++;
            else pos++;
        }
        if (neg>pos){
            if ((neg-pos)%2==0) ans+=(neg-pos)/2;
            else ans+=(neg-pos)/2 +1;
            neg-=ans;
        }
        if (neg%2==0) cout<<ans<<endl;
        else cout<<ans+1<<endl;
    }
}