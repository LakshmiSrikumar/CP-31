#include<bits/stdc++.h>
using namespace std;

long long minSegmentSum(vector<long long>& a, long long l, long long r) {
    int n = a.size();
    long long range= r-l+1;
    long long start=l-1;
    vector<long long> right , left;
    for (long long i=0;i<r;i++){
        left.push_back(a[i]);
    }
    for (long long i=start;i<n;i++){
        right.push_back(a[i]);
    }
    sort(right.begin(),right.end());
    sort(left.begin(),left.end());

    long long l_sum =0 ,r_sum=0;
    for (long long i=0;i<range;i++){
        if (i<left.size()){
            l_sum+=left[i];
        }
        if (i<right.size()){
            r_sum+=right[i];
        }
    }
    long long mini = min(l_sum,r_sum);
    return mini;
}


int main() {
    long long t;
    cin>>t;
    while (t--){
     long long n,l, r;
    cin >> n >> l >> r;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << minSegmentSum(a, l, r) << endl;
    }
}
