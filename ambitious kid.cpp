#include<iostream>
using namespace std;

int main(){
        int n;
        cin>>n;
        int mini=1e6;
        int x=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if (x==0) {
                mini=0; 
                break;
            } 
            mini=min(mini,abs(x));
        }
        cout<<mini<<endl;
}