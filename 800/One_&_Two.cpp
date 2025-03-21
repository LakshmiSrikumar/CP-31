#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        int cnt=0;
        int i=0;
        for( i=0;i<n;i++){
            if (arr[i]==2) cnt++;
            arr[i]=cnt;
        }
        if (cnt%2==1) cout<<-1<<endl;
        else{
            for(i=0;i<n;i++){
                if(arr[i]==cnt/2) break;
                
            }
            cout<<i+1<<endl;
        }
    }
}