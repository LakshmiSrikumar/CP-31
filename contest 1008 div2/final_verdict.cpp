#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        double sum=accumulate(arr.begin(),arr.end(),0);
        sum/=n;
        if (sum==x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<< endl;
        }
    }
}