#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,A,B;
        cin>>n>>A>>B;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini=min(A,B);
        int qa=0,qb=0,common=0;
        for(int i=0;i<n;i++){
            if (arr[i]<=mini){
                common++;
            }
            else{
                if (arr[i]<=A)qa++;
                if(arr[i]<=B)qb++;
            }
        }
        int low = 0, high = n, q = 0;
        while(low <= high){
            int mid = (low + high) / 2;
            int need = 0;
            if(mid > qa) need += (mid - qa);
            if(mid > qb) need += (mid - qb);
            if(need <= common){
                q = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        cout << 2 * q << endl;
        
    }
}