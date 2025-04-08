#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if (arr[i]> arr[i+1]){
                flag=false;
                break;
            }
            long mini=min(arr[i],arr[i+1]);
            arr[i]-=mini;
            arr[i+1]-=mini;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}