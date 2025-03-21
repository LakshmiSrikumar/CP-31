#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>ans;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>x;
            ans.push_back(x);
        }
        arr.push_back(ans[0]);
        for(int i=1;i<n;i++){
            if(ans[i]<ans[i-1]) arr.push_back(ans[i]);
            arr.push_back(ans[i]);
        }
        cout<<arr.size()<<endl;
        for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}