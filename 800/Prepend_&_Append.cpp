#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        char ch;
        for (int i=0;i<n;i++){
            cin>>ch;
            s.push_back(ch);
        }
        int i=0; int j=n-1;
        while(i<j && s[i]!=s[j])i++,j--;
        cout<<j-i+1<<endl;
    }
}