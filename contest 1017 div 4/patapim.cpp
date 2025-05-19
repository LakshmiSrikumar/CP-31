#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> grid(n + 1, vector<int>(n + 1));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> grid[i][j];
            }
        }

        int m = 2 * n;
        vector<int> perm(m + 1);

        for (int k = 2; k <= m; ++k) {
            int i = max(1, k - n);
            int j = k - i;
            perm[k] = grid[i][j];
        }

        vector<bool> present(m + 1, false);
        for (int k = 2; k <= m; ++k) {
            present[perm[k]] = true;
        }

        for (int x = 1; x <= m; ++x) {
            if (!present[x]) {
                perm[1] = x;
                break;
            }
        }

        for (int i = 1; i <= m; ++i) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }

}