#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int y;
        for(int i=0;i<n;i++){
            cin>>y;
            arr[i]=y;
        }
        int cnt=0; int ans=INT_MIN;
        for(int i=0;i<n;i++){
           ans=max(ans,arr[i]- cnt);
           cnt=arr[i];
            }
           ans=max(ans,2*(x-cnt));
           cout<<ans<<endl;
        }
        
    }
