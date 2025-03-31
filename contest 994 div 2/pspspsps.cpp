#include<bits/stdc++.h>
using namespace std;

bool solve(int n, string &s) {
    vector<int> p(n, INT_MAX); 
    vector<int> arr(n, INT_MAX);
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'p') {
            p[i] = i + 1; 
        }
        if (s[i] == 's') {
            arr[i] = n - i; 
        }
    }

    
    for (int i = 1; i < n; ++i) {
        arr[i] = min(arr[i], arr[i - 1]);
    }

    
    for (int i = n - 2; i >= 0; --i) {
        p[i] = min(p[i], p[i + 1]);
    }

    vector<int> temp(n);
    for (int i = 0; i < n; ++i) {
        temp[i] = min(arr[i], p[i]);
    }

    vector<int> sort_temp = temp;
    sort(sort_temp.begin(), sort_temp.end());

    for (int i = 0; i < n; ++i) {
        if (sort_temp[i] < i + 1) {
            return false; 
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        string s;
        cin >> n >> s; 

        if (solve(n, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}