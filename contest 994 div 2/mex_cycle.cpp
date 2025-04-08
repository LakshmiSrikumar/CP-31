#include <bits/stdc++.h>
using namespace std;

// Function to find MEX of a set
int MEX(const set<int>& s) {
    int mex = 0;
    while (s.find(mex) != s.end()) {
        ++mex;
    }
    return mex;
}

vector<int> assign(int n, int x, int y) {
    vector<int> a(n, -1);
    vector<set<int>> similar(n);

    for (int i = 0; i < n; ++i) {
        similar[i].insert((i + 1) % n);
        similar[i].insert((i - 1 + n) % n);
    }

    x--; y--;
    similar[x].insert(y);
    similar[y].insert(x);

    for (int i = 0; i < n; ++i) {
        set<int> neighbour;
        for (int friendIdx : similar[i]) {
            if (a[friendIdx] != -1) {
                neighbour.insert(a[friendIdx]);
            }
        }
        a[i] = MEX(neighbour);
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> result = assign(n, x, y);
        for (int value : result) {
            cout << value << " ";
        }
        cout << "\n";
    }

    return 0;
}