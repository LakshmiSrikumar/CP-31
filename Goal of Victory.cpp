#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        int x1=0,x2=0,a=0;
        while(n--){
            cin>>a;
            if (a<0)x1+=(-1)*a;
            else x2+=a;
        }
        cout<<x1-x2<<endl;
    }
}