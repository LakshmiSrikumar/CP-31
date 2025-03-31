#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long block = n / 15;
        long long rem = n%15;
        long long ans= block *3 + min(3LL, rem+1);
        cout<<ans<<endl;
    }
}
