#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t>0){
        int n, k;
        cin>>n>>k;
        int arr[n];
        int x;
        for (int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) flag=1; 
        }
        if (k>1 ||flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        t--;
    }
}

