#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    else if (b==0) return a;
    if (a>b) return gcd(a%b,b);
    else return gcd(a,b%a);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,flag=0;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int val=gcd(arr[i],arr[j]);
                if (val <=2){
                    flag=1;
                    break;
                }
            }
        }
        if (flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}