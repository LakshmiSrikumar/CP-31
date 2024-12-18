#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        long m,a,b,c;
        cin>>m>>a>>b>>c;
        long total=2*m;
        long a_seat=min(a,m);
        long b_seat=min(b,m);
        long left_seats=total- a_seat - b_seat;
        long c_seat=min(c,left_seats);
        long seated=a_seat+b_seat+c_seat;
        cout<<seated<<endl;
    }
}