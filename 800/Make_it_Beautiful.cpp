#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        sort(arr.rbegin(),arr.rend());
        swap(arr[1],arr[n-1]);
        if (arr[0]==arr[1]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}