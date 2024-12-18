#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int maxi=0; int cnt=0;
        while (n--){
            cin>>x;
            if (x==0) cnt++;
            else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
        }
        maxi=max(maxi,cnt);
        cout<<maxi<<endl; 
    }
}